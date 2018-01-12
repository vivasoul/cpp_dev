#include <stdio.h>

struct Employee {
	char name[20];
	char jumin_num[15];
	int	 wage;
};

int main(void)
{
	struct Employee you;
	
	puts("당신의 이름은? : ");
	fgets(you.name, sizeof(you.name), stdin);
	fflush(stdin); 
	puts("당신의 주민등록번호는? : ");
	fgets(you.jumin_num, sizeof(you.jumin_num), stdin);	
	fflush(stdin);
	puts("당신의 임금은? : ");
	scanf("%d", &you.wage);	
	
	
	printf("\n %s %s %d", you.name, you.jumin_num, you.wage);
	
	return 0;
}
