#include <stdio.h>

int main(void)
{
	int arr[2][2][2] = {1,2,3,4,5,6,7,8};
	/* 0 */
	printf("arr[1][0][1] : %d \n", arr[1][0][1]);
	
	/* 1 */
	printf("(*(arr+1))[0][1] : %d \n", (*(arr+1))[0][1]);
	/* 2 */
	printf("(**(arr+1))[1] : %d \n", (**(arr+1))[1]);
	/* 3 */	
	printf("*((**(arr+1))+1) : %d \n", *((**(arr+1))+1));
	/* 4 */	
	printf("*(arr[1][0]+1) : %d \n", *(arr[1][0]+1));
	/* 5 */	
	printf("*(*arr[1]+1) : %d \n", *(*arr[1]+1));	
	/* 6 */	
	printf("(*arr[1])[1] : %d \n", (*arr[1])[1]);
	
	return 0;
}
