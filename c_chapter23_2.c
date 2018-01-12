#include <stdio.h>
#include <string.h>

void getPersonalInfo(char (*_arr)[20], size_t size);
void deleteLF(char* _str, size_t size);

int main(void)
{
	int i;
	char arr[3][3][20] = {"OK\n"};
	
	//printf("%d %d", sizeof(arr[0]), sizeof(arr[0][0]));
	
	for(i=0; i<3; i++)
	{
		printf("%d��° ����� ������ �Է��Ͻÿ�.\n", i); 
		getPersonalInfo(arr[i], sizeof(arr[0])/sizeof(arr[0][0]));
	}
	
	puts("�Էµ������� ������ �����ϴ�.\n");
	for(i=0; i<3; i++)
	{
		printf("%d��° %s %s %s \n", i, arr[i][0], arr[i][1], arr[i][2]);
	}

	return 0;		
}

void getPersonalInfo(char (*_arr)[20], size_t size)
{
	int j;
	
	for(j=0; j<size; j++)
	{
		switch(j)
		{
			case 0:
				fputs("�̸� : ", stdout);
				break;
			case 1:
				fputs("��ȭ��ȣ : ", stdout);
				break;
			case 2:
				fputs("�ּ� : ", stdout);
				break;
		}
		
		fgets(_arr[j], sizeof(_arr[j]), stdin);
		
		deleteLF(_arr[j], strlen(_arr[j]));
		
		fflush(stdin);
	}
}

void deleteLF(char* _str, size_t size)
{
	int i;
	
	for(i=0; i<size; i++)
	{
		if(_str[i] == '\n') _str[i] = 0;
	}
}
