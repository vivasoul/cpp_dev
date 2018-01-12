#include <stdio.h>
#include <string.h>

char* toSting(int a);

int main(void)
{
	int i;
	char* arr[3];	
	char* real;
	
	for(i=0; i<3; i++)
	{

	}	
	real = toSting(3);
	
	printf("DOUBLE-POINTER OUT OF toSting STACK : %d\n", &real);
	printf("POINTER OUT OF toSting STACK : %d\n", real);
	
	//fputs(toSting(3), stdout); 
}

char* toSting(int a)
{
	char *temp = "EED";
	
	printf("DOUBLE-POINTER IN toSting STACK : %d\n", &temp);
	printf("POINTER IN toString STACK : %d\n", temp);
	
	return temp;
}
