#include "c_chapter28_1.h"

int main(void)
{
	BOOK books[3];
	int i = 0;
	
	puts("���� ���� �Է� ����\n");
	for(i=0; i<3; i++)
	{
		scanBookCover(&books[i], i);
	}
	
	for(i=0; i<3; i++)
	{
		printBookCover(&books[i], i);
	}	
	
	return 0;
}

BOOL scanBookCover(BOOK *_book, int idx)
{
	char* author	= _book->author;
	char* title		= _book->title;
	int* pageNum	= &(_book->pageNum);
	
	printf("%d��° ���� �Է�\n", idx);
	
	fputs("���� : ", stdout);	
	fgets(author, sizeof(_book->author), stdin);	
	deleteLF(author, strlen(author));
	
	fputs("���� : ", stdout);	
	fgets(title, sizeof(_book->title), stdin);	
	deleteLF(title, strlen(title));
	
	fputs("������ �� : ", stdout);
	scanf("%d", pageNum);
	fflush(stdin);
	
	puts("-----------------------------");
	return TRUE; 
}

void printBookCover(BOOK *_book, int idx)
{
	printf("%d��° ���� ���\n", idx);
	
	printf("���� : %s \n", _book->author);
	printf("���� : %s \n", _book->title);
	printf("�������� : %d \n", _book->pageNum);	
	
	puts("-----------------------------");
}



