#include <stdio.h>

struct Employee {
	char name[20];
	char jumin_num[15];
	int	 wage;
};

int main(void)
{
	struct Employee you;
	
	puts("����� �̸���? : ");
	fgets(you.name, sizeof(you.name), stdin);
	fflush(stdin); 
	puts("����� �ֹε�Ϲ�ȣ��? : ");
	fgets(you.jumin_num, sizeof(you.jumin_num), stdin);	
	fflush(stdin);
	puts("����� �ӱ���? : ");
	scanf("%d", &you.wage);	
	
	
	printf("\n %s %s %d", you.name, you.jumin_num, you.wage);
	
	return 0;
}
