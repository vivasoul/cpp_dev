#include <stdio.h>
#define MAX(a,b) printf(#a "��" #b " �� ���� ū ���� %d �Դϴ�.\n", (a > b ? a : b))

int main(void)
{
	MAX(4,5);	
	MAX(1,0);	
	MAX(3,3);	
	MAX(100,45);	
	return 0;	
}
