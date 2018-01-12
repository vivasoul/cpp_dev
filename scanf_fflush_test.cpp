#include <stdio.h>

int main(void)
{
	int i;
	char str[10];
	
	puts("입력1 : ");
	scanf("%d", &i);
	
	fflush(stdin);
	
	puts("입력2 : ");
	fgets(str, 10, stdin);
	
	if(str[0] == '\n') str[0] = 'N';
	else			   str[0] = 'Y';
	
	puts(str);
	
	return 0;
}
