#include <stdio.h>
#include <string.h>

void deleteLF(char* _str, size_t size);
void writeSome(const char* _title, char *_buf, int _buf_size, FILE* _file);
void writeMyStory(FILE* _file);

int main(void)
{
	FILE *_file;
	
	_file = fopen("C:\\Users\\user\\Desktop\\프로그래밍\\cpp_dev\\mystroy.txt", "wt");
	if(_file == NULL)
	{
		puts("file open error. \n");
		return 1;	
	}
	
	writeMyStory(_file);
	
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

void writeSome(const char* _title, char *_buf, int _buf_size, FILE* _file)
{
	fputs(_title, stdout);
	fgets(_buf, _buf_size, stdin);	
	//deleteLF(_buf, strlen(_buf));
	fflush(stdin);
	fputs(_title, _file);
	fputs(_buf, _file);
}

void writeMyStory(FILE* _file)
{
	char buf[30];
	size_t buf_size = sizeof(buf);
	
	writeSome("이름 : ", buf, buf_size, _file);
	writeSome("주소 : ", buf, buf_size, _file);
	writeSome("주민등록번호 : ", buf, buf_size, _file);
}


