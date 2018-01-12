#include <stdio.h>
#include <stdlib.h>

void freeBuffer(char** _buffer);
void initBuffer(char** _buffer, int _buf_size);
int	validateBuffer(char* _buffer);

int main(int argc, char** argv)
{

	FILE* src;
	char* buffer = NULL;
		
	int ch;
	int max_buf_size = 32;
	int buf_pos = -1;
	int valid_cnt = 0;
	
	if(argc < 2)
	{
		puts("not enough arguments..");		
		puts("default file path is word.txt...");		
		src = fopen("word.txt", "rb");	
	}
	else
	{
		src = fopen(argv[1], "rb");	
	}

	if(src == NULL)
	{
		puts("fail to open file..");
		return 1;
	}
	while(1)
	{

		ch = fgetc(src);
		if(ch == '\r') ch = 0;
		if(ch == ' ' || ch == '\n' || ch == '\t' || ch == -1)
		{
			if(buf_pos != -1){
				puts(buffer);	
				valid_cnt += validateBuffer(buffer);
			} 			
			buf_pos = -1;
			
			if(ch == -1) break;
		}
		else
		{
			if(buf_pos == -1) initBuffer(&buffer, max_buf_size);		
			buffer[++buf_pos] = ch;
		}
		
	}
	
	printf("the count of words starting with A or B or a or b is %d \n", valid_cnt);
	
	if(fclose(src) != 0 )
	{
		puts("fail to close file..");				
		return 1;
	}	
	
	freeBuffer(&buffer);
	return 0;
}

void freeBuffer(char** _buffer)
{
	if(*_buffer != NULL)
	{
		free(*_buffer);
	}

}

void initBuffer(char** _buffer, int _buf_size)
{
	freeBuffer(_buffer);
	*_buffer = (char*) malloc(_buf_size*sizeof(char));
}


int	validateBuffer(char* _buffer)
{
	int i;
	char first_ch = _buffer[0];
	char chek_ch[4] = {'A', 'B', 'a', 'b'};	

	for(i=0; i<4; i++)
	{
		if(first_ch == chek_ch[i])	return 1;
	}
	return 0;
}
