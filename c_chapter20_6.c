#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame(int *play_time, int *strike_time, int* ball_time);
void playerTurn(int *_player);
void cpuTurn(void);

int cpu[3];

int main(void)
{
	int play_count = 0;
	int strike_count, ball_count;
	
	cpuTurn();
	
	while(strike_count < 3)
	{
		strike_count = 0;
		ball_count 	 = 0;
		playGame(&play_count, &strike_count, &ball_count);
		
		printf("%d 번째 도전 : %d STRIKE, %d BALL \n", play_count, strike_count, ball_count);
	}
	printf("-END GAME-\nGOOD JOB.");
	
}

void playGame(int *play_time, int *strike_time, int* ball_time)
{
	
	int player[3];
	
	playerTurn(player);
	(*play_time)++;
	
	if		(player[0] == cpu[0])	(*strike_time)++;
	else if	(player[0] == cpu[1]) 	(*ball_time)++;	
	else if	(player[0] == cpu[2]) 	(*ball_time)++;
	
	if		(player[1] == cpu[0])	(*ball_time)++;
	else if	(player[1] == cpu[1]) 	(*strike_time)++;	
	else if	(player[1] == cpu[2]) 	(*ball_time)++;

	if		(player[2] == cpu[0])	(*ball_time)++;
	else if	(player[2] == cpu[1]) 	(*ball_time)++;	
	else if	(player[2] == cpu[2]) 	(*strike_time)++;
	
}

void playerTurn(int *_player)
{	
	printf("3개의 숫자 선택 : ");
	scanf("%d %d %d", _player, _player+1, _player+2);
}

void cpuTurn(void)
{
	int seed = (int)time(NULL);
	srand(seed);
	
	cpu[0] = rand() % 10;
	cpu[1] = rand() % 10;
	cpu[2] = rand() % 10;
	
	printf("%d %d %d \n", cpu[0], cpu[1], cpu[2]);
}

