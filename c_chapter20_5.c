#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame(int *play_time, int *draw_time, int *win_time, int *lose_time); 
void playerTurn(int *_player);
void cpuTurn(int *_computer);
char* getDeckName(int deck)
{
	switch(deck)
	{
		case 1:
			return "바위";
		case 2:
			return "가위";
		case 3:
			return "보";
	}
}

int main(void)
{
	int play_count = 0;
	int win_count = 0;
	int lose_count = 0;
	int draw_count = 0;
	
	while(lose_count < 1)
	{
		playGame(&play_count, &draw_count, &win_count, &lose_count);
	}
	
	printf("%d전 %d승 %d무 %d패 하셨습니다. 감사합니다.\n", play_count, win_count, draw_count, lose_count);
	
}

void playGame(int *play_time, int *draw_time, int* win_time, int *lose_time)
{
	
	int player 		= 0;
	int cpu			= 0;	
	int judgement 	= 0;
	
	playerTurn(&player);
	
	if(player < 1 || player > 3)
	{

	}
	else	
	{
		cpuTurn(&cpu);
		
		if(player == 1) 		
		{
			if		(cpu == 1)	judgement = 0;
			else if	(cpu == 2)	judgement = 1;
			else				judgement = -1;
		}
		else if(player == 2) 		
		{
			if		(cpu == 1)	judgement = -1;
			else if	(cpu == 2)	judgement = 0;
			else				judgement = 1;
		}
		else
		{
			if		(cpu == 1)	judgement = 1;
			else if	(cpu == 2)	judgement = -1;
			else				judgement = 0;
		}
		
		switch(judgement)
		{
			case 0	:
				(*draw_time)++;
				printf("당신은 %s 선택, 컴퓨터는 %s 선택, 비겼습니다.\n", getDeckName(player), getDeckName(cpu));
				break;
			case 1	:
				(*win_time)++;
				printf("당신은 %s 선택, 컴퓨터는 %s 선택, 이겼습니다.\n", getDeckName(player), getDeckName(cpu));
				break;				
			case -1	:
				(*lose_time)++;
				printf("당신은 %s 선택, 컴퓨터는 %s 선택, 졌습니다.\n", getDeckName(player), getDeckName(cpu));
				break;				
		}
		(*play_time)++;
	}
	
}

void playerTurn(int *_player)
{	
	printf("바위는 1, 가위는 2, 보는 3: ");
	scanf("%d", _player);
}

void cpuTurn(int *_computer)
{
	int seed = (int)time(NULL);
	srand(seed);
	*_computer = rand() % 3 + 1;
}

