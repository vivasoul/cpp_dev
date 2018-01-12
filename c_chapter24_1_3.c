#include <stdio.h>
#include <string.h>

void deleteLF(char* _str, size_t size);
void readMyStory(FILE* _file);
void bufferedReadMyStory(FILE* _file);

int main(void)
{
	FILE *_file;
	
	_file = fopen("C:\\Users\\user\\Desktop\\프로그래밍\\cpp_dev\\mystroy.txt", "rt");
	if(_file == NULL)
	{
		puts("file open error. \n");
		return 1;	
	}
	
	//readMyStory(_file);
	bufferedReadMyStory(_file);
	
	if(fclose(_file) != 0)
	{
		puts("file close error. \n");
		return 1;			
	}
	
	return 0;
}

void deleteLF(char* _str, size_t size)
{
	int i;
	
	for(i=0; i<size; i++)
	{
		if(_str[i] == '\n') _str[i] = 0;
	}
}

void readMyStory(FILE* _file)
{
	int ch;
	
	while(1)
	{
		ch = fgetc(_file);
		if(feof(_file) != 0) break;
		putchar(ch);
	}
}

void bufferedReadMyStory(FILE* _file)
{
	char buf[30];
	size_t buf_size = sizeof(buf);
	
	while(1)
	{
		if(fgets(buf, buf_size, _file) == NULL) break;		
		fputs(buf, stdout);		
		//deleteLF(buf, strlen(buf));
		//puts(buf);	
	}
}
