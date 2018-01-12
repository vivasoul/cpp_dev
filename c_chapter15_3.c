#include <stdio.h>

int main(void)
{
	int a[10];
	int i;	
	int b;
	
	int *front = &a[0];
	int *back  = &a[9];
	
	for(i=1; i<11; i++)
	{
		printf("%d번째 숫자 입력 : ", i);
		scanf("%d", &b);
		
		if(b%2 == 1)
		{
			*front = b;
			front++;
		}
		else					
		{
			*back = b;
			back--;
		}
	}
	
	for(i=1; i<11; i++)
	{
		printf("%d번째 숫자는 %d \n", i, a[i-1]);		
	}
		
	return 0;	
}
