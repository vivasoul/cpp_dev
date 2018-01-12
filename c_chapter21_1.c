#include <stdio.h>

void toggleUpperLower(char* a);

const char toLower = 'a'-'A';
const char toUpper = 'A'-'a';

int main(void)
{
	char b = 0;
	
	while(b != EOF)
	{
		b = getchar();		
		toggleUpperLower(&b);
		putchar(b);
	}
}

void toggleUpperLower(char* a)
{
	if(*a >= 'a' && *a <= 'z')	
	{
		*a += toUpper;	
	}
	else if(*a >= 'A' && *a <= 'Z')	
	{
		*a += toLower;	
	}
	else if(*a == EOF || *a == '\n')
	{
		
	}
	else
	{
		printf("잘못된 입력!\n");
	} 
	
}

