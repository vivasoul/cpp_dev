#include <stdio.h>

void getArray(int* arr, int size)
{
	int i;
	
	for(i=0; i<size; i++)
	{
		arr[i] = i+1;
	}	
}

void printEven(int* arr, int size)
{
	int i;
	
	for(i=0; i<size; i++)
	{
		if(arr[i]%2 == 0) printf("%d is even.\n", arr[i]);
	}
}

void printOdd(int* arr, int size)
{
	int i;
	
	for(i=0; i<size; i++)
	{
		if(arr[i]%2 != 0) printf("%d is odd.\n", arr[i]);
	}	
}

int main(void)
{
	int _arr[10];
	
	getArray(_arr, 10);
	printEven(_arr, 10);
	printOdd(_arr, 10);
	
	return 0;
}
