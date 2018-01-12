#include <stdio.h>

/* sort desc */
void bubbleSortArray(int a[], int size)
{
	int i;
	int j;
	int temp;
	int outer_loop = size-1;
	int inner_loop;
	
	printf("BUBBLE SORT START\n");	
	
	for(i=0; i<outer_loop;i++)
	{
		inner_loop = outer_loop - i;
		for(j=0; j<inner_loop;j++)
		{
			if(a[j] < a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}		
	}
	
	printf("BUBBLE SORT END\n");
}

void printArray(int a[], int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("%dth element : %d \n", i, a[i]);
	}
}

void scanArray(int a[], int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("insert %dth element : ", i);
		scanf("%d", &a[i]);
	}
}

int main(void)
{
	//int _a[7] = {1, 2, 3, 4, 5, 6, 7};
	int _a[7];
	
	scanArray(_a, 7);
	
	bubbleSortArray(_a, 7);
	
	printArray(_a, 7);
	
	return 0;
}
