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
		puts("str1�� str2���� Ů�ϴ�.");
	}
	else if(result<0)
	{
		puts("str2�� str1���� Ů�ϴ�.");
	}
	else
	{
		puts("�� ���ڿ��� ��Ȯ�� �����ϴ�.");
	}
	
	return 0; 
}
