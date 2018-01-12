#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

void getTwinDices(int _arr[2]);

int main(void)
{
	int arr[2];
	
	getTwinDices(arr);	
	
	printf("주사위 결과: %d, %d", arr[0], arr[1]);
}

void getTwinDices(int _arr[2])
{	
	int seed = (int)time(NULL);
	
	srand(seed);
	
	_arr[0] = (rand() % 6)+1;
	_arr[1] = (rand() % 6)+1;
}



