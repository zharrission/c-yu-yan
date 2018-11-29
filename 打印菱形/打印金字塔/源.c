#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] ="*************";
//	int arr2[] = "*            ";
//	//int arr3[] = "             ";
//	int left = 1;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	{
//		for (left = 1; left <= right; left++)
//		{
//			/*sleep(1000);*/
//			arr2[left] = arr1;
//			printf("%s\n", arr2);
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 26; i += 2)
//	{
//		if (i <= 13)
//		{
//			if (i <= 13)
//			{
//				for (j = 1; j <= i; j++)
//					printf("*");
//			}
//			printf("\n");
//		}
//		if (i > 13)
//		{
//			if (i > 13)
//			{
//
//				for (j = i; j < 26; j++)
//					printf("*");
//			}
//			printf("\n");
//
//		}
//	}
//	system("pause");
//	return 0;
//}
int main()
{
	int i, j;
	int line = 0;
	printf("亲输入打印的正三角行数");
	scanf("%d", &line);
	for (i = 1; i <= line; i++)
	{
		for (j = 1; j <= (line - i); j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i < line; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * (line - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
