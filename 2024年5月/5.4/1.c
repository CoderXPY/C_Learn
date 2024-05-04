#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputc('x', pf);
//	fputc('p', pf);
//	fputc('y', pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	fputc('x', stdout);
//	fputc('p', stdout);
//	fputc('y', stdout);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fputs("xpy\n", pf);
//	fputs("xpy\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char arr[10] = { 0 };
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fgets(arr, 2, pf);
//	printf("%s\n", arr);
//	fgets(arr, 2, pf);
//	printf("%s\n", arr);
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char arr[10];
//	int a;
//	float sc;
//};
//
//
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fscanf(pf, "%s %d %f", s.arr, &(s.a), &(s.sc));
//	printf("%s %d %f", s.arr, s.a, s.sc);
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { "xpy",121,5.5f };
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fprintf(pf, "%s %d %f", s.arr, s.a, s.sc);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


struct S
{
	char arr[10];
	int a;
	float sc;
};


int main()
{
	struct S s = { 0 };
	FILE* pf = fopen("test.dat", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	fread(&s, sizeof(struct S), 1, pf);

	printf("%s %d %f", s.arr, s.a, s.sc);
	fclose(pf);
	pf = NULL;
	return 0;
}

//int main()
//{
//	struct S s = { "xpy",10,5.5f };
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}