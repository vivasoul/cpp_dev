#define STR_LEN 20
typedef struct whitePage
{
	char name[STR_LEN];
	char tel[STR_LEN];
} WP;

WP* wps;
int wp_cursor;
int wp_num;
int incr;

void initWhitePages(void);
void extendWhitePages(int increment);
void freePages(void);

void insertWhitePage(char* name, char* tel);
void deleteWhitePage(int _idx);
void selectWhitePageByName(char* _name);
void selectWhitePageByTel(char* _tel);
void selectAllWhitePages(void);
void printWhitePage(int _idx);

