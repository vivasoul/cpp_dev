#include <stdio.h>
#define PI 3.14
#define AREA(r) r*r*PI

int main(void)
{
	double radius = 0;
	
	fputs("���� �������� �Է��ϼ���. : ", stdout);
	scanf("%lf", &radius);
	
	printf("���� ���̴� %f �Դϴ�.", AREA(radius));
	
	return 0;
}
