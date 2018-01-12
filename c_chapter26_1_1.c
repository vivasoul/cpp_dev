#include <stdio.h>
#define ADD(a,b,c) printf(#a "+" #b "+" #c "=%d \n", (a)+(b)+(c))
#define MLT(a,b,c) printf(#a "*" #b "*" #c "=%d \n", (a)*(b)*(c))

int main(void)
{
		
	ADD(3,4,5);
	MLT(3,4,5);
	
	ADD((1+2),(3+4),(5+6));
	MLT((1+2),(3+4),(5+6));
			
	return 0;
}
