#include <stdio.h>

int main(void)
{
	int i;
	char str[10];
	
	puts("�Է�1 : ");
	scanf("%d", &i);
	
	fflush(stdin);
	
	puts("�Է�2 : ");
	fgets(str, 10, stdin);
	
	if(str[0] == '\n') str[0] = 'N';
	else			   str[0] = 'Y';
	
	puts(str);
	
	return 0;
}
