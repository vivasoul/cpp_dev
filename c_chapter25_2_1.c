#include <stdio.h>
#include <stdlib.h>

void getString(char *_str, int _len);

int main(void)
{
	char*	input;
	int		length = 0;
	
	fputs("입력할 문자열의 최대 길이는 : ", stdout);
	scanf("%d", &length);
	
	getString(input, length);
	
	return 0;
}

void getString(char *_str, int _len)
{
	_str = (char *)malloc(_len*sizeof(char));
	
	if(_str == NULL)
	{
		puts("dynamic allocation failed..");
		return;
	}
	
	printf("%d \n", _len); 
	fflush(stdin);
	fputs("문자열을 입력하세요 : ", stdout);
	fgets(_str, _len, stdin);
	fflush(stdin);
	
	fputs("당신이 입력한 문자열은...\n", stdout);	
	for(_len--;_len>-1;_len--)
	{
		if(_str[_len]=='\n') _str[_len] = 'E';
		else if(_str[_len]=='\0') _str[_len] = '0';
		fputc(_str[_len], stdout);
	}
	
	free(_str);
}


