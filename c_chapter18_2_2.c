#include <stdio.h>

void fct1(int *_arr1, int *_arr2);
void fct2(int (*_arr1)[4], int (*_arr2)[4]);

/*
void fct1(int _arr1[], int _arr2[]);
void fct2(int _arr1[][4], int _arr2[][4]);
*/

int main(void)
{
	int arr1[3];
	int arr2[4];
	
	int arr3[3][4];
	int arr4[2][4];
	
	fct1(arr1, arr2);
	fct2(arr3, arr4);
	
	return 0;
}

void fct1(int *_arr1, int *_arr2)
{	
	
}

void fct2(int (*_arr1)[4], int (*_arr2)[4])
{
	
}

