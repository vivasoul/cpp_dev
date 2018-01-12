#include <stdio.h>

int main(void)
{
	int a[3][9];
	int i, j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<9;j++)
		{
			a[i][j] = (i+2)*(j+1);
			
			printf("%d X %d = %d \n", i+2, j+1, a[i][j]);			
		}
		printf("\n");
	}
	
	return 0;
}
