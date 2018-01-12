#include <stdio.h>

typedef enum
{
	true, false
} bool;

int strlen_custom(char* str)
{
	int length = 0;
	
	while(str[length] != '\0')
	{
		printf("문자 :  %c \n", str[length]);
		length++;
	}	
	return length;
}

int main(void)
{
	char str[10];
	int length;
	int i;
	int max_i;
	int chk_i = 0;
	
	printf("문자를 입력하세요. : ");
	scanf("%s", str);

	length =  strlen_custom(str);
	
	printf("문자열의 길이는 : %d \n", length);
	
	max_i = length/2;

	for(i=0; i<max_i; i++)
	{
		if(str[i] == str[length-1-i]) chk_i++;						
		printf("%c vs %c \n", str[i] ,str[length-1-i]);
	}
	
	printf("max_i %d, chk_i %d \n", max_i, chk_i); 
	
	if(chk_i == max_i)	printf("%s는 회문입니다.", str);
	else				printf("%s는 회문이 아닙니다.", str);
		
	return 0;
}
