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
		printf("���� :  %c \n", str[length]);
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
	
	printf("���ڸ� �Է��ϼ���. : ");
	scanf("%s", str);

	length =  strlen_custom(str);
	
	printf("���ڿ��� ���̴� : %d \n", length);
	
	max_i = length/2;

	for(i=0; i<max_i; i++)
	{
		if(str[i] == str[length-1-i]) chk_i++;						
		printf("%c vs %c \n", str[i] ,str[length-1-i]);
	}
	
	printf("max_i %d, chk_i %d \n", max_i, chk_i); 
	
	if(chk_i == max_i)	printf("%s�� ȸ���Դϴ�.", str);
	else				printf("%s�� ȸ���� �ƴմϴ�.", str);
		
	return 0;
}
