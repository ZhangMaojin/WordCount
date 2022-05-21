#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable : 4996)
#pragma warning(suppress : 4996)
//统计字符数
void cCount(char* file)
{
	FILE* f;
	f = fopen(file, "r");
	int charNumber = 0;
	char t = fgetc(f);
	while (t != EOF)
	{
		t = fgetc(f);
		charNumber++;
	}
	printf("字符数为：%d", charNumber);
}

//统计单词数
void wCount(char* file)
{
	FILE* f;
	f = fopen(file, "r");
	int wordCount = 0;
	char c = fgetc(f);
	while (c != EOF)
	{
		c = fgetc(f);
		if (c == ',' || c == ' ')
		{
			wordCount++;
		}
	}
	printf("单词数为：%d", wordCount);
}

int main(int argc, char* argv[])
{
	if (argc == 3)
	{
		FILE* f;
		char* file = argv[2];
		f = fopen(argv[2], "r");
		if (!f)
		{
			printf("文件不存在！");
		}
		else if (!(strcmp(argv[1], "-c")))
		{
			cCount(file);
		}

		if (!(strcmp(argv[1], "-w")))
		{
			wCount(file);
		}
	}
	return 0;
}

/*
//统计字符数
void cCount(char* file)
{
	FILE* f;
	f = fopen(file, 'r');
	int charNumber = 0;
	char t = fgetc(f);
	while (t!=EOF)
	{
		t = fgetc(f);
		charNumber++;
	}
	printf("字符数为：%d", charNumber);
}

//统计单词数
void wCount(char* file)
{
	FILE* f;
	f = fopen(file, 'r');
	int wordCount = 0;
	char c=fgetc(f);
	while (c!=EOF)
	{
		c = fgetc(f);
		if (c==','||c==' ')
		{
			wordCount++;
		}
	}
	printf("单词数为：%d", wordCount);
}
*/