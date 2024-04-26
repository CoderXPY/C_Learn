#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main()
//{
//	//int ret = strcmp("aaa", "bbb");
//	//int ret = strcmp("bbb", "aaa");
//	int ret = strcmp("aaa", "aaa");
//	printf("%d\n", ret);
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1++ == *str2++)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	if (*str1 < *str2)
//	{
//		return -1;
//	}
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1++ == *str2++)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		;
//	}
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char* p = "aaa";
//	char* q = "bbb";
//	int ret = my_strcmp(p,q);
//	if (ret > 0)
//	{
//		printf("p > q\n");
//	}
//	else if (ret < 0)
//	{
//		printf("p < q\n");
//	}
//	else
//	{
//		printf("p == q\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "aaaa";
//	char arr2[] = "bbbb";
//	strncpy(arr1, arr2, 2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "aaaa";
//	char arr2[] = "bbbb";
//	strncat(arr1, arr2, 2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "aaaa";
//	char arr2[] = "bbbb";
//	int ret = strncmp(arr1, arr2, 2);
//	if (ret > 0)
//	{
//		printf("p > q\n");
//	}
//	else if (ret < 0)
//	{
//		printf("p < q\n");
//	}
//	else
//	{
//		printf("p == q\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abbbcde";
//	char arr2[] = "bbc";
//	char* ret = strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了:%s\n", ret);
//	}
//	return 0;
//}

//char* my_strstr(const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cp = str1;
//
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abbbcde";
//	char arr2[] = "bbc";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了:%s\n", ret);
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "zpw@botedu.tech";
//	char* p = "@.";
//	char tmp[20] = { 0 };
//	strcpy(tmp, arr);
//	char* ret = NULL;
//
//	for (ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	//ret = strtok(tmp, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	return 0;
//}

int main()
{
	printf("%s\n", strerror(0));
	printf("%s\n", strerror(1));
	printf("%s\n", strerror(2));
	printf("%s\n", strerror(3));
	printf("%s\n", strerror(4));
	printf("%s\n", strerror(5));
	return 0;
}