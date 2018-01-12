#include <stdio.h>

struct point {
	int x;
	int y;
} p1, p2;

struct point PointAdd(struct point *_p1, struct point *_p2);

int main(void)
{
	struct point added;
	
	p1.x = 1;
	p1.y = 2;
	
	p2.x = 3;
	p2.y = 4;
	
	added = PointAdd(&p1, &p2);
	
	printf("гу : x = %d y = %d", added.x, added.y);
	
	return 0;
}

struct point PointAdd(struct point *_p1, struct point *_p2)
{
	struct point result;
	
	result.x = (_p1->x)+(_p2->x);
	result.y = (_p1->y)+(_p2->y);
	
	return result;	
}
