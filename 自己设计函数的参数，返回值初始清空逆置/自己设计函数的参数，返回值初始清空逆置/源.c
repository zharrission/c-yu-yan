#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//void init(int arr[], int len)
//{
//	int i = 0;
//	printf("初始化数组：");
//	for (i = 0; i <= len; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//}
//void empty(int arr[], int len)
//{
//	int i = 0;
//	printf("清空后的数组：\n");
//	for (i = 0; i <= len; i++)
//	{
//		arr[i] = 0;
//		printf("%d", arr[i]);
//	}
//}
//void reverse(int arr[], int len)
//{
//	int i = 0;
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	int arr[5];
//	int len = 0; 
//	int i = 0;
//	len = sizeof(arr) / sizeof(arr);
//	reverse(arr, len);
//	init(arr, len);
//	printf("\n");
//	empty(arr, len);
//	system("pause");
//	return 0;
//}
void init(int arr[], int len)

{

	int i = 0;

	printf("初始化数组->：");

	for (i = 0; i<len; i++)

	{

		scanf_s("%d", &arr[i]);

	}

}

void reverse(int arr[], int len)

{

	int i = 0;

	printf("\n逆置数组->：");

	for (i = len - 1; i >= 0; i--)

	{

		printf("%d ", arr[i]);

	}

}

void empty(int arr[], int len)

{

	int i = 0;

	printf("清空数组->：");

	for (i = 0; i<len; i++)

	{

		arr[i] = 0;

		printf("%d ", arr[i]);

	}

}

int main()

{

	int arr[5];

	int len = 0;

	int i = 0;

	len = sizeof(arr) / sizeof(arr[0]);

	init(arr, len);

	reverse(arr, len);

	printf("\n");

	empty(arr, len);
	system("pause");
	return 0;

}
