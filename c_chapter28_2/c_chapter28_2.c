#include "c_chapter28_2.h"

int main(void)
{
	BOOK* books;
	int i;	
	int maxCnt;
	
	fputs("입력할 도서의 갯수를 입력하세요. : ", stdout);
	scanf("%d", &maxCnt);
	fflush(stdin);
	
	books = (BOOK*) malloc(maxCnt*sizeof(BOOK));
	
	puts("도서 정보 입력 시작\n");
	for(i=0; i<maxCnt; i++)
	{
		scanBookCover(&books[i], i);
	}
	
	for(i=0; i<maxCnt; i++)
	{
		printBookCover(&books[i], i);
	}	
	
	free(books);	
	return 0;
}

BOOL scanBookCover(BOOK *_book, int idx)
{
	char* author	= _book->author;
	char* title		= _book->title;
	int* pageNum	= &(_book->pageNum);
	
	printf("%d번째 도서 입력\n", idx);
	
	fputs("저자 : ", stdout);	
	fgets(author, sizeof(_book->author), stdin);	
	deleteLF(author, strlen(author));
	
	fputs("제목 : ", stdout);	
	fgets(title, sizeof(_book->title), stdin);	
	deleteLF(title, strlen(title));
	
	fputs("페이지 수 : ", stdout);
	scanf("%d", pageNum);
	fflush(stdin);
	
	puts("-----------------------------");
	return TRUE; 
}

void printBookCover(BOOK *_book, int idx)
{
	printf("%d번째 도서 출력\n", idx);
	
	printf("저자 : %s \n", _book->author);
	printf("제목 : %s \n", _book->title);
	printf("페이지수 : %d \n", _book->pageNum);	
	
	puts("-----------------------------");
}



