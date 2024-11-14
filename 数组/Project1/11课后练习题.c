#include <stdio.h>
#include <stdint.h>

int main14()
{
	//
	int arr[6];
	printf("请输入六个整数");
	for (int i = 1; i < 6; i++)
	{
		scanf("%d", &arr[i]);
	}
	int i, j;
	int temp;
	for (i = 0; i < 6 - 1; i++)
	{
		for (j = 0; j < 6 - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 6; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}


int main()
{
	int arr1[4][4], arr2[4][4];
	printf("请输入一个4x4的矩阵：\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &arr1[i][j]);
			arr2[j][i] = arr1[i][j];
		}
	}
	
	printf("转置后的数组为：");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr2[j][i]);
		}
		printf("\n");
	}
	return 0;
}