#include <stdio.h>
#include <string.h>

void getNumericSum(char *_str);

int main(void)
{
	char str[20];
	
	fputs("���ڿ� �Է����ּ���. : ", stdout);
	fgets(str, sizeof(str), stdin);
	
	getNumericSum(str);
	
	return 0;
}

void getNumericSum(char *_str)
{
	int i;
	int sum = 0;
	int length = strlen(_str)-1;	
	
	for(i=0; i<length; i++)
	{
		if(_str[i] >= '1' && _str[i] <= '9') 
		{
			sum += (_str[i]-'0');			
			fputc(_str[i], stdout);
			fputc('\n', stdout);
		}
	}
	
	printf("������ ������ : %d", sum);
			
}
