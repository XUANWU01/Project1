#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int index = 0;
int num = 100;
void func(int arr1[], int n1, int arr2[], int n2)
{
	for (int i = 0; i < n1; i++)
	{
		int flag = 0;
		for (size_t j = 0; j <= index; j++)
		{
			if (arr1[i] == arr2[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0 && index < n2)
		{
			arr2[index] = arr1[i];
			index++;
		}
	}
}
int main06()
{
	int arr1[10];
	int arr2[10];
	printf("请输入10个整数：");
	for (size_t i = 0; i < 10; i++)
		scanf("%d", &arr1[i]);
	func(arr1, 10, arr2, 10);
	printf("去重后的元素如下：\n");
	for (size_t i = 0; i < index; i++)
		printf("%d", arr2[i]);
	printf("\n");
	return 0;
}