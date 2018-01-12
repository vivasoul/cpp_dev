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
		puts("[���� ��ȭ��ȣ��]");
		puts("------------------------------------");
		puts("1. �߰�");
		puts("2. ����");
		puts("3. �̸����� ��ȸ");
		puts("4. ��ȭ��ȣ�� ��ȸ");
		puts("5. ��� ��ȸ");
		puts("6. ����");
		puts("�޴��� �Է��ϼ���.-------------------");	
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
			fputs("�̸� : ", stdout);
			fgets_ex(_name, 20, stdin);
			fputs("��ȭ��ȣ : ", stdout);
			fgets_ex(_tel, 20, stdin);
			insertWhitePage(_name,_tel);
			break;
		case DELETE_MENU :
			fputs("������ ��ȭ��ȣ�� �Ϸù�ȣ�� �Է����ּ���.> ", stdout);
			scanf("%d", &_del_idx);
			fflush(stdin);
			deleteWhitePage(_del_idx);
			break;
		case SELECT1_MENU :
			fputs("�˻��� �̸� : ", stdout);
			fgets_ex(_name, 20, stdin);			
			selectWhitePageByName(_name);
			break;
		case SELECT2_MENU :
			fputs("�˻��� ��ȭ��ȣ : ", stdout);
			fgets_ex(_tel, 20, stdin);			
			selectWhitePageByTel(_tel);
			break;
		case SELECTALL_MENU :
			selectAllWhitePages();
			break;
		case EXIT_MENU :
			puts("��ȭ��ȣ�θ� �����մϴ�.\n�̿����ּż� �����մϴ�.");
			return;									
	}
	
	fputs("�޴��� ���ư��ðڽ��ϱ�?(Y/N)> ", stdout);
	_exit = getchar();
	if(_exit == 'Y') startMenu();
}

int main(int argc, char *argv[]) {
	initMenu();
	return 0;
}
