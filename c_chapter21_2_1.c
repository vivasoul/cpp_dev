#include <stdio.h>
#include <string.h>

void bubbleSort(char** _arr, size_t size);
void deleteLF(char* _str, size_t size);

int main(void)
{
	int i;
	char arr[3][10];
	char result[30] = "";
	char* sortedArr[3];
	
	for(i=0; i<3; i++)
	{
		putchar('1'+i);
		puts("번째 문자열 입력 : ");
		fgets(arr[i], sizeof((arr[i])), stdin);	
		
		deleteLF(arr[i], sizeof(arr[i]));
				
		sortedArr[i] = arr[i];
		
		fflush(stdin);	
	}
	
	bubbleSort(sortedArr, sizeof(sortedArr)/sizeof(char*));
	
	puts("SORTED RESULT\n");
	for(i=0; i<3; i++)
	{
		strcat(result, sortedArr[i]);
	}
	fputs(result, stdout);	
	
	return 0;
}


void bubbleSort(char** _arr, size_t size)
{
	int i, j;
	char* temp;
	
	size--;
	/* sorting time */
	for(i=0; i<size; i++)
	{
		/* bubbling time */
		for(j=0;j<size-i;j++)
		{			
			if(strcmp(_arr[j], _arr[j+1]) < 0)
			{
				temp = _arr[j+1];
				_arr[j+1] = _arr[j];
				_arr[j] = temp;
			}
		}
	}
}

void deleteLF(char* _str, size_t size)
{
	int i;
	
	for(i=0; i<size; i++)
	{
		if(_str[i] == '\n') _str[i] = 0;
	}
}



