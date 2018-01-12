#include "custom_util.h"

typedef struct book
{
	char	author[30];
	char	title[30];
	int		pageNum;	
}BOOK;

BOOL scanBookCover(BOOK *_book, int idx);
void printBookCover(BOOK *_book, int idx);

