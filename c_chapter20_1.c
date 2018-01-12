#include <stdio.h>

void rotateMatrix(int arr[][4], int _rowSize, int _colSize);
void printMatrix(int arr[][4], int _rowSize, int _colSize);

int angle = 0;

int main(void) {
	int i,j;
	
	int a[4][4] = { 1, 2, 3, 4,
					5, 6, 7, 8,
					9, 10,11,12,
					13,14,15,16 };
					
	rotateMatrix(a, 4, 4);
	printMatrix(a, 4, 4);
	
	rotateMatrix(a, 4, 4);
	printMatrix(a, 4, 4);
	
	rotateMatrix(a, 4, 4);
	printMatrix(a, 4, 4);
	
	rotateMatrix(a, 4, 4);
	printMatrix(a, 4, 4);		
						
	return 0;
}

void rotateMatrix(int (*arr)[4], int _rowSize, int _colSize)
{
	angle += 90;	
	printf("rotate matrix %d degree \n", angle);
	
	/* 배열은 선언과 동시에 메모리에 주소가 할당된다. 왜냐하면 배열은 상수이기 때문에..*/
	int _tempArr[_rowSize][_colSize];
	int i,j;
	
	
	for(i=0; i<_rowSize; i++)
	{
		for(j=0; j<_colSize; j++)
		{
			_tempArr[i][j] = arr[(_colSize-1)-j][i];
			//printf("%d\t", _tempArr[i][j]);			
		}
		//printf("\n");
	}
	
	for(i=0; i<_rowSize; i++)
	{
		for(j=0; j<_colSize; j++)
		{
			arr[i][j] = _tempArr[i][j];
			//printf("%d\t", _tempArr[i][j]);			
		}
		//printf("\n");
	}
}

void printMatrix(int arr[][4], int _rowSize, int _colSize)
{
	int i,j;
	
	printf("--------------------------------\n");
	for(i=0; i<_rowSize; i++)
	{
		for(j=0; j<_colSize; j++)
		{
			printf("%d\t", arr[i][j]);		
		}
		printf("\n");
	}
	printf("--------------------------------\n");
}
