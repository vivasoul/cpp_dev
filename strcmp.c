#include <stdio.h>
#include <string.h>

char *str1 = "ABC";
char *str2 = "ABBEFG";

int main(void)
{
	int result;
	
	result = strcmp(str1, str2);
	
	if(result>0)
	{
		puts("str1이 str2보다 큽니다.");
	}
	else if(result<0)
	{
		puts("str2이 str1보다 큽니다.");
	}
	else
	{
		puts("두 문자열이 정확히 같습니다.");
	}
	
	return 0; 
}
