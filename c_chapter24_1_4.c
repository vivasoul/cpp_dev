#include <stdio.h>
#include <string.h>

void copyStory(FILE* _src, FILE* _dest);

int main(void)
{
	FILE *src;
	FILE *dest;
	
	int closeReuslt1, closeReuslt2; 
	
	src = fopen("C:\\Users\\user\\Desktop\\프로그래밍\\cpp_dev\\mystroy.txt", "rb");	
	dest = fopen("C:\\Users\\user\\Desktop\\프로그래밍\\cpp_dev\\mystroy2.txt", "wb");
	if(src == NULL || dest == NULL)
	{
		puts("files open error. \n");
		return 1;	
	}
	
	copyStory(src, dest);
	
	closeReuslt1 = fclose(src);
	closeReuslt2 = fclose(dest);
	
	if(closeReuslt1 != 0 || closeReuslt2 != 0)
	{
		puts("files close error. \n");
		return 1;			
	}
	puts("mystroy.txt copied to mystory2.txt successfully. \n");
	return 0;
}

void copyStory(FILE* _src, FILE* _dest)
{
	int ch;
	
	while(1)
	{
		ch = fgetc(_src);		
		if(feof(_src) != 0) break;
		fputc(ch, _dest);
	}
}

