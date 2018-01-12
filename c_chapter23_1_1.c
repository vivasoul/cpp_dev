#include <stdio.h>

struct person{
	char name[20];
	char pID[20];
	struct person* frnd;	
};

void swapPerson(struct person *p1, struct person *p2);

int main(void)
{
	struct person man1 = {"Mr.Lee", "820204-0000512"};
	struct person man2 = {"Mr.Lee's Friend'", "820000-0000101"};	
	
	man1.frnd = &man2;
	
	swapPerson(&man1, &man2);
	
	printf("man1: %s %s \n", man1.name, man1.pID);
	
	printf("man2: %s %s \n", man2.name, man2.pID);
	
	printf("man1's Friend : %s %s \n", man1.frnd->name, man1.frnd->pID);
	
	
	return 0;
}

void swapPerson(struct person *p1, struct person *p2)
{
	struct person temp;
	struct person *tempFriend;

	tempFriend = p1->frnd;
	p1->frnd = p2->frnd;
	p2->frnd = tempFriend;	
	
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;	
	
}


