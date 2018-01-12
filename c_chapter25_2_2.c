#include <stdio.h>
#include <stdlib.h>

void extendArray(int** _str, int* _size);

int main(void)
{
	int i;
	int num		= 0;
	int count	= 0;
	int size 	= 5;
	int* str	= (int*)malloc(size*sizeof(int));
	
	while(1)
	{
		scanf("%d", &num);		
		if(num == -1) break;
		
		count++;
		printf("count %d size %d \n", count, size);
		if(count > size) {
			extendArray(&str, &size);	
		}
		str[count-1] = num;
	}
	for(i = 0; i < count; i++)
	{
		printf("%d ", str[i]);		
	}
	
	free(str);
	return 0;
}


void extendArray(int** _str, int* _size)
{
	int* tempStr = (int*)malloc((*_size+3)*sizeof(int));
	int i;
	W
	if(tempStr == NULL)
	{
		puts("dynamic allocation failed..");
		return;
	}
	
	for(i=0; i<*_size; i++)
	{
		tempStr[i] = (*_str)[i];
	}	
	*_size = (*_size) + 3;
	
	printf("array size up +3 -> %d \n", *_size);
	free(*_str);	
	*_str = tempStr;
}
