#include <stdio.h>

void MinMax(int **_min, int **_max, int *_a, int _size); 

int main(void)
{
	int a[5] = {25, 62, 512, 123, 15};
	
	int *min, *max;
	
	min = &a[0];
	max = min;
	
	MinMax(&min, &max, a, sizeof(a)/sizeof(a[0]));
	
	printf("min = %d \nmax = %d", *min, *max);
	
	return 0;
}

void MinMax(int **_min, int **_max, int *_a, int _size)
{	
	int i;
	
	for(i=0; i<_size; i++)
	{
		if(**_min > _a[i]) *_min = &_a[i];
		if(**_max < _a[i]) *_max = &_a[i];		
	}
}
