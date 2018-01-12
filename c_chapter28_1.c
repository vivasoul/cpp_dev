#include "custom_util.h"

int main(void)
{
	char str[5] = "abc\n";
	
	deleteLF(str, 5);
	
	puts(str);
	
	return 0;
}
