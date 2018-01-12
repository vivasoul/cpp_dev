#include <stdio.h>

void printSnailMatirx(int size);

int main(void)
{
	int a = 0;
	printf("숫자를 입력하시오. :");
	scanf("%d", &a);
	
	printSnailMatirx(a);
		
	return 0;	
}

void printSnailMatirx(int size)
{
	int a[size][size];
	int i, j;
	int x=0, y=-1;
	int limit = size;
	int count = 0;
	int delta = 1;
	
	while(limit > 0)
	{
		for(i=0; i<limit; i++)
		{
			count++;
			y += delta;
			a[x][y] = count;
			//printf("%d, %d = %d \n", x, y , count);
		}
		limit--;
		for(j=0; j<limit; j++)
		{
			count++;
			x += delta;	
			a[x][y] = count;
			//printf("%d, %d = %d \n", x, y , count);
		}
		delta *= -1;				
	}
	
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");		
	}
	
}


