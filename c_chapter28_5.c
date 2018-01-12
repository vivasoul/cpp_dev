#include <stdio.h>

int main(int argc, char** argv)
{

	FILE *src1;
	FILE *src2;
	
	int ch1;
	int ch2;
	
	char* src_path1;
	char* src_path2;
	
	int cmp_cnt = 0;
	
	if(argc < 3)
	{
		puts("not enough arguments..");
		src_path1 = "test1.txt";
		src_path2 = "test2.txt";
	}
	else
	{
		src_path1 = argv[1];
		src_path2 = argv[2];
	}
	
	src1 = fopen(src_path1, "rb");
	src2 = fopen(src_path2, "rb");


	if(src1 == NULL || src2 == NULL)
	{
		puts("fail to open files..");
		return 1;
	}
	
	while(1)
	{
		ch1 = fgetc(src1);
		ch2 = fgetc(src2);
		cmp_cnt++;
		if(ch1 == -1 || ch2 == -1)
		{
			if(ch1 != -1)
			{		
				printf("%s가 먼저 파일의 끝에 도달하였으므로\n두 파일은 서로 같지 않습니다.", src_path2);		
				break;
			}	
			else if(ch2 != -1)	
			{
				printf("%s가 먼저 파일의 끝에 도달하였으므로\n두 파일은 서로 같지 않습니다.", src_path1);		
				break;				
			}
			else	
			{
				printf("두 파일:%s ,%s 은 서로 같습니다.", src_path1, src_path2);		
				break;				
			}
		}
		else
		{
			if(ch1 != ch2)
			{
				printf("두 파일:%s ,%s 은 서로 같지 않습니다. 첫 불일치 지점 : %d", src_path1, src_path2, cmp_cnt);		
				break;
			}
		}
		
	}

	
	
	if((fclose(src1) != 0 ) || (fclose(src2) != 0))
	{
		puts("fail to close files..");				
		return 1;
	}	
	
	return 0;
}
