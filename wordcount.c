#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable : 4996)
#pragma warning(suppress : 4996)
//ͳ���ַ���
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
	printf("�ַ���Ϊ��%d", charNumber);
}

//ͳ�Ƶ�����
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
	printf("������Ϊ��%d", wordCount);
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
			printf("�ļ������ڣ�");
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
//ͳ���ַ���
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
	printf("�ַ���Ϊ��%d", charNumber);
}

//ͳ�Ƶ�����
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
	printf("������Ϊ��%d", wordCount);
}
*/