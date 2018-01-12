#include <stdio.h>
#define PI 3.14
#define AREA(r) r*r*PI

int main(void)
{
	double radius = 0;
	
	fputs("원의 반지름을 입력하세요. : ", stdout);
	scanf("%lf", &radius);
	
	printf("원의 넓이는 %f 입니다.", AREA(radius));
	
	return 0;
}
