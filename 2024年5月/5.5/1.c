#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//struct S 
//{
//	char arr[10];
//	int age;
//	float f;
//};
//
//int main()
//{
//	struct S s = { "xpy",20,5.5f };
//	struct S tmp = { 0 };
//
//	char buf[100] = { 0 };
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.f);
//	printf("%s\n", buf);
//
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.f));
//	printf("%s %d %f", tmp.arr, tmp.age, tmp.f);
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	char ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fseek(pf, -1, SEEK_CUR);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	int ret = ftell(pf);
//	printf("%d\n", ret);
//
//	rewind(pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fwrite(&a, sizeof(int), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfread = fopen("test.txt", "r");
//	if (pfread == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	FILE* pfwrite = fopen("test2.txt", "w");
//	if (pfwrite == NULL)
//	{
//		perror("fopen");
//		fclose(pfread);
//		pfread = NULL;
//	}
//	int ch = 0;
//	while ((ch = fgetc(pfread)) != EOF)
//	{
//		fputc(ch, pfwrite);
//	}
//	fclose(pfread);
//	pfread = NULL;
//	fclose(pfwrite);
//	pfwrite = NULL;
//	return 0;
//}

