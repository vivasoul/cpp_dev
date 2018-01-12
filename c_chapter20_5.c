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
			return "����";
		case 2:
			return "����";
		case 3:
			return "��";
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
	
	printf("%d�� %d�� %d�� %d�� �ϼ̽��ϴ�. �����մϴ�.\n", play_count, win_count, draw_count, lose_count);
	
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
				printf("����� %s ����, ��ǻ�ʹ� %s ����, �����ϴ�.\n", getDeckName(player), getDeckName(cpu));
				break;
			case 1	:
				(*win_time)++;
				printf("����� %s ����, ��ǻ�ʹ� %s ����, �̰���ϴ�.\n", getDeckName(player), getDeckName(cpu));
				break;				
			case -1	:
				(*lose_time)++;
				printf("����� %s ����, ��ǻ�ʹ� %s ����, �����ϴ�.\n", getDeckName(player), getDeckName(cpu));
				break;				
		}
		(*play_time)++;
	}
	
}

void playerTurn(int *_player)
{	
	printf("������ 1, ������ 2, ���� 3: ");
	scanf("%d", _player);
}

void cpuTurn(int *_computer)
{
	int seed = (int)time(NULL);
	srand(seed);
	*_computer = rand() % 3 + 1;
}

