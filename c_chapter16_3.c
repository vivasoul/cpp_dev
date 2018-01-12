#include <stdio.h>

void writeScores(int a[][4], int row_size, int col_size);
void printScores(int a[][4], int row_size, int col_size);
void test(int* a)
{
	printf("%x, %x \n", &a, a); 
}

char* subjects[4] = {"KOR", "ENG", "MTH", "ETH"};
char* students[4] = {"LEE", "KIM", "PARK", "CHOI"};

int subject_tots[4];
int student_tots[4];

int scores[4][4];

int total = 0;

int main(void)
{
	int a = 0;
	int *_a = &a;
	
	printf("%x, %x \n", &_a, _a); 
	
	test(_a);
	//writeScores(scores, 4, 4);
	
	//printScores(scores, 4, 4);
	
	return 0;	
}

void printScores(int a[][4], int row_size, int col_size)
{	
	int i,j;
	
	for(i=0; i<row_size; i++)
	{
		printf("The score of %s \n", students[i]);
		for(j=0; j<col_size; j++)
		{
			printf("[ %s : %d ] ", subjects[j], a[i][j]);			
		}
		printf("\n %s sub_total : %d \n",  students[i], student_tots[i]);
	}	

	for(j=0; j<col_size; j++)
	{
		printf("%s sub_total : %d \n",  subjects[j], subject_tots[j]);
	}	
	
	printf("Total : %d \n", total);
}

void writeScores(int a[][4], int row_size, int col_size)
{
	int i,j;
	
	for(i=0; i<row_size; i++)
	{
		printf("insert score of %s \n", students[i]);
		for(j=0; j<col_size; j++)
		{
			printf("%s : ", subjects[j]);
			scanf("%d", &a[i][j]);
			
			student_tots[i] += a[i][j];
			subject_tots[j] += a[i][j];
			
			total += a[i][j];
		}
		printf("\n");
	}
}
