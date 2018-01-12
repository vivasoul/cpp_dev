#include <stdio.h>

int main(void)
{
	int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	printf("a = %d \n", a);
	
	printf("a+1 = %d \n", a+1);
	
	printf("*(a+1) = %d \n", *(a+1));
	
	printf("*((a+1)+1) = %d \n", *((a+1)+1));
	
	printf("(*(a+1)+1) = %d \n", (*(a+1)+1));
	
	printf("*(*(a+1)+1) = %d \n", *(*(a+1)+1));
	
	return 0;
}
