#include <stdio.h>
#include <string.h>

char *str2 = "Hello Everybody!";

int main(void)
{
	char str1[20];
	int i;
	int len = strlen(str2);
	
	for(i=1; i<=len; i++)
	{
		strcpy(str1, "");
		strncat(str1, str2, i);
		puts(str1);
	}
	
	return 0;
}
