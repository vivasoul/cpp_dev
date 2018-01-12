#include <stdio.h>
#define COMPLEX_FORMAT_INT "(%f+%fi)"

typedef double real;
typedef double imaginary;

typedef struct complex
{
	real 	  x;
	imaginary y;	
} COMPLEX;

void doComplexAdd(COMPLEX _a, COMPLEX _b);
void doComplexMLT(COMPLEX _a, COMPLEX _b);

int main(void)
{
	COMPLEX c1 = {1.2,4.3};
	COMPLEX c2 = {2.5,5.1};
	
	doComplexAdd(c1, c2);
	doComplexMLT(c1, c2);
	
	return 0;
}


void doComplexAdd(COMPLEX _a, COMPLEX _b)
{
	
	printf(COMPLEX_FORMAT_INT "+" COMPLEX_FORMAT_INT, _a.x, _a.y, _b.x, _b.y);
	printf(" = " COMPLEX_FORMAT_INT " \n", _a.x+_b.x, _a.y+_b.y);
}

void doComplexMLT(COMPLEX _a, COMPLEX _b)
{
	printf(COMPLEX_FORMAT_INT "*" COMPLEX_FORMAT_INT, _a.x, _a.y, _b.x, _b.y);
	printf(" = " COMPLEX_FORMAT_INT " \n", (_a.x*_b.x)-(_a.y*_b.y), (_a.x*_b.y)+(_a.y*_b.x));
}

