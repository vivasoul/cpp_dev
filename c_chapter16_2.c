#include <stdio.h>

int main(void)
{
	
	int a[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};
	int b[4][2];
	int i,j;
	
	for(i=0; i<4; i++)
	{
		for(j=0;j<2;j++)
		{
			b[i][j] = a[j][i];
			
			printf("b[%d][%d] = %d ", i, j, b[i][j]);
		}	
		printf("\n");
	}
	
	return 0;
}
