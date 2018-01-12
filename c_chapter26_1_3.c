#include <stdio.h>
#define MAX(a,b) printf(#a "와" #b " 중 가장 큰 값은 %d 입니다.\n", (a > b ? a : b))

int main(void)
{
	MAX(4,5);	
	MAX(1,0);	
	MAX(3,3);	
	MAX(100,45);	
	return 0;	
}
