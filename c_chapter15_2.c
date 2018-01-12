#include <stdio.h>

int main(void)
{
	int binary_multiplier = 1;	
	int decimal = 0;		
	
	printf("insert number : ");
	scanf("%d", &decimal);	
	
	while(binary_multiplier <= decimal)
	{	
		binary_multiplier *= 2;
	}
	
	binary_multiplier /= 2;	
	
	if(decimal > 0)
	{
		do
		{
			printf("%d", decimal/binary_multiplier);	
			
			decimal %= binary_multiplier;
			
			binary_multiplier /= 2;
			
		}while(binary_multiplier > 0);		
	}	
	else
	{
		printf("%d", decimal);
	}

	
	return 0;
}
