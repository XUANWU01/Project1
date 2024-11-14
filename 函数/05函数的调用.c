#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int, int);

int main07(void)
{
	int a = 10;
	int b = 20;
	int value;
	value = max(a, b);
	printf("最大值为：%d\n", value);
	return 0;
}
int max(int a, int b)
{
	return a > b ? a : b;
}


void BubbleSort(int arr[],int len)
{
	int i, j;
	int temp;
	for ( i = 0; i < len-1; i++)
	{
		for(j=0;j<len-i-1;j++)
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
	}
	return;
}

int main(void)
{
	int i;
	int arr[] = { 8,6,2,10,5,9,4,1,7,3 };
	BubbleSort(arr, 10);
	for ( i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}