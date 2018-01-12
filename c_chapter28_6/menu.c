#include "common.h"
#include "whitePages.h"
typedef enum menu{
 INSERT_MENU 	= 1,
 DELETE_MENU 	= 2,
 SELECT1_MENU	= 3,
 SELECT2_MENU	= 4,
 SELECTALL_MENU	= 5,
 EXIT_MENU		= 6		
} MENU;

void (*INSERT)(char* name, char* tel);
void (*DELETE)(int _idx);
void (*SELECT1)(char* name);
void (*SELECT2)(char* tel);
void (*SELECTALL)(void);

int exectueMenu(int _menu);
void startMenu(void);

void initMenu(void)
{
	initWhitePages();
	startMenu();
}

void startMenu(void)
{
	int menu;
	//while(1)
	//{
		puts("[간편 전화번호부]");
		puts("------------------------------------");
		puts("1. 추가");
		puts("2. 삭제");
		puts("3. 이름으로 조회");
		puts("4. 전화번호로 조회");
		puts("5. 모두 조회");
		puts("6. 종료");
		puts("메뉴를 입력하세요.-------------------");	
		fputs("> ", stdout);
		scanf("%d", &menu);
		fflush(stdin);
		//if(menu == EXIT_MENU) break;
		//else				  exectueMenu(menu);
		exectueMenu(menu);
	//}	
}

int exectueMenu(int _menu)
{
	char _name[20];
	char _tel[20];
	char _exit; 
	int  _del_idx;
	
	switch(_menu)
	{
		case INSERT_MENU :
			fputs("이름 : ", stdout);
			fgets_ex(_name, 20, stdin);
			fputs("전화번호 : ", stdout);
			fgets_ex(_tel, 20, stdin);
			insertWhitePage(_name,_tel);
			break;
		case DELETE_MENU :
			fputs("삭제할 전화번호부 일련번호를 입력해주세요.> ", stdout);
			scanf("%d", &_del_idx);
			fflush(stdin);
			deleteWhitePage(_del_idx);
			break;
		case SELECT1_MENU :
			fputs("검색할 이름 : ", stdout);
			fgets_ex(_name, 20, stdin);			
			selectWhitePageByName(_name);
			break;
		case SELECT2_MENU :
			fputs("검색할 전화번호 : ", stdout);
			fgets_ex(_tel, 20, stdin);			
			selectWhitePageByTel(_tel);
			break;
		case SELECTALL_MENU :
			selectAllWhitePages();
			break;
		case EXIT_MENU :
			puts("전화번호부를 종료합니다.\n이용해주셔서 감사합니다.");
			return;									
	}
	
	fputs("메뉴로 돌아가시겠습니까?(Y/N)> ", stdout);
	_exit = getchar();
	if(_exit == 'Y') startMenu();
}

int main(int argc, char *argv[]) {
	initMenu();
	return 0;
}
