#include <stdio.h>

void fct3(int **_arr1, int *(*_arr2)[5]);
void fct4(int ***_arr1, int ***(*_arr2)[5]);
/*
void fct3(int *_arr1[], int *_arr2[][5]);
void fct4(int **_arr1[], int ***_arr2[][5]);
*/
int main(void)
{
	int *arr5[3];
	int *arr6[3][5];
	
	int **arr7[5];
	int ***arr8[3][5];
	
	fct3(arr5, arr6);
	fct4(arr7, arr8);
	
	return 0;
}

void fct3(int **_arr1, int *(*_arr2)[5])
{
	
}
void fct4(int ***_arr1, int ***(*_arr2)[5])
{
}
