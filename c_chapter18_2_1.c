#include <stdio.h>

int main(void)
{
	int *arr1[5];
	int *arr2[3][5];
	
	int **arr3 = arr1;
	int *(*arr4)[5] = arr2;

	printf("arr2 : %d \n", sizeof(arr2));
	printf("arr2[0] : %d \n", sizeof(arr2[0]));
	printf("arr2[0][0] : %d \n", sizeof(arr2[0][0]));
	
	printf("arr4 : %d \n", sizeof(arr4));
	printf("arr4[0] : %d \n", sizeof(arr4[0]));
	printf("arr4[0][0] : %d \n", sizeof(arr4[0][0]));
	
	return 0;
}
