#include <stdio.h>

struct Employee {
	char name[20];
	char jumin_num[15];
	int	 wage;
} he, me;

int main(void)
{	
	puts("���� �̸���? : ");
	fgets(he.name, sizeof(he.name), stdin);
	fflush(stdin);	
	puts("���� �ֹε�Ϲ�ȣ��? : ");
	fgets(he.jumin_num, sizeof(he.jumin_num), stdin);	
	fflush(stdin);
	puts("���� �ӱ���? : ");
	scanf("%d", &he.wage);		
	fflush(stdin);
	
	puts("���� �̸���? : ");
	fgets(me.name, sizeof(me.name), stdin);
	fflush(stdin);
	puts("���� �ֹε�Ϲ�ȣ��? : ");
	fgets(me.jumin_num, sizeof(me.jumin_num), stdin);	
	fflush(stdin);
	puts("���� �ӱ���? : ");
	scanf("%d", &me.wage);		
	fflush(stdin);
	
	printf("\n %s %s %d", he.name, he.jumin_num, he.wage);
	printf("\n %s %s %d", me.name, me.jumin_num, me.wage);
	
	return 0;
}
