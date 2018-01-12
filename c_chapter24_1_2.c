#include <stdio.h>
#include <string.h>

void deleteLF(char* _str, size_t size);
void appendSome(const char* _title, char *_buf, int _buf_size, FILE* _file);
void appendMyStory(FILE* _file);

int main(void)
{
	FILE *_file;
	
	_file = fopen("C:\\Users\\user\\Desktop\\프로그래밍\\cpp_dev\\mystroy.txt", "at");
	if(_file == NULL)
	{
		puts("file open error. \n");
		return 1;	
	}
	
	appendMyStory(_file);
	
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

void appendSome(const char* _title, char *_buf, int _buf_size, FILE* _file)
{
	fputs(_title, stdout);
	fgets(_buf, _buf_size, stdin);	
	//deleteLF(_buf, strlen(_buf));
	fflush(stdin);
	fputs(_title, _file);
	fputs(_buf, _file);
}

void appendMyStory(FILE* _file)
{
	char buf[30];
	size_t buf_size = sizeof(buf);
	
	appendSome("취미 : ", buf, buf_size, _file);
	appendSome("좋아하는 음식 : ", buf, buf_size, _file);
}


