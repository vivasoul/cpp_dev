#include "common.h"
#include "whitePages.h"
void initWhitePages(void)
{
	int j;
	
	wps = NULL;
	wp_cursor = -1;
	wp_num = 10;
	incr = 5;
	
	freePages();
	wps = (WP*)malloc(wp_num*sizeof(WP));
	
	for(j=0;j<wp_num;j++)
	{
		deleteWhitePage(j);		
	}
}

void extendWhitePages(int increment)
{
	int i;
	int new_wp_num = wp_num + increment;
	WP* tempWps = (WP*)malloc(new_wp_num*sizeof(WP));
	
	for(i=0; i<wp_num;i++)
	{
		tempWps[i] = wps[i];
	}	
	if(wps != NULL) free(wps);
	wp_num = new_wp_num;
	wps = tempWps;
}
void freePages(void)
{	
	int i=0;
	
	if(wps != NULL)
	{
		for(;i<wp_cursor+1; i++)
		{
			free(++wps);
		}
	}
}

void insertWhitePage(char* name, char* tel)
{	
	if(++wp_cursor > wp_num) extendWhitePages(incr);
	
	strncpy(wps[wp_cursor].name, name, STR_LEN);
	strncpy(wps[wp_cursor].tel, tel, STR_LEN);
}
void deleteWhitePage(int _idx)
{
	if(_idx > (wp_num-1) )
	{
		puts("입력하신 일련번호의 전화번호부가 존재하지 않습니다.");
		selectAllWhitePages();
	}
	else
	{
		initString(wps[_idx].name, STR_LEN);
		initString(wps[_idx].tel, STR_LEN);			
		printf("%d번째 전화번호부를 삭제하였습니다. \n", _idx);
	}
}
void selectWhitePageByName(char* _name)
{
	int i;
	int cmp_len = strlen(_name);
	int match_cnt = 0;
	for(i=0; i<wp_num; i++)
	{		
		if(strncmp(wps[i].name, _name, cmp_len) == 0)
		{
			printWhitePage(i);
			match_cnt++;
		}
	}	
	if(match_cnt == 0) printf("There is no white-page for name : %s \n", _name);
}
void selectWhitePageByTel(char* _tel)
{
	int i;
	int cmp_len = strlen(_tel);
	int match_cnt = 0;
	for(i=0; i<wp_num; i++)
	{		
		if(strncmp(wps[i].tel, _tel, cmp_len) == 0)
		{
			printWhitePage(i);
			match_cnt++;
		}
	}	
	if(match_cnt == 0) printf("There is no white-page for tel : %s \n", _tel);	
}
void selectAllWhitePages(void)
{
	int i;
	for(i=0; i<wp_num; i++)
		printWhitePage(i);
}

void printWhitePage(int _idx)
{
	printf("%d. %s %s \n", _idx, wps[_idx].name, wps[_idx].tel);
}


