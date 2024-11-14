#include <stdio.h>
#include <stdlib.h>

//冒泡排序
int main03(void)
{
	int arr[10] = { 9,5,7,8,6,10,2,4,3,1 };
	int i, j;
	int temp;
	for (i = 0; i < 10 - 1; i++)
	{
		for (j = 0; j < 10 - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}

//选择排序
int main04(void)
{
	int arr[10] = { 9,5,7,8,6,10,2,4,3,1 };
	int i, j;
	int temp, min;
	for (int i = 0; i < 10- 1; i++)
	{
		min = i;
		for (int j = i + 1; j < 10; j++)
		{
			if (arr[j]<arr[min])
			{
				min = j;
			}
		}
		if (min != 1)
		{
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
	printf("选择排序：");
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}


//插入排序
int main05(void)
{
	int arr[10] = { 9,5,7,8,6,10,2,4,3,1 };
	int i, j;
	int temp;
	for (int i = 0; i < 10; i++)
	{
		//获取当前元素的值和索引
		temp = arr[i];
		j = i;
		//判断时索引不能越界，应为是与前面一位元素进行比较，所以j的最小值为1
		/**while (j > 0 && arr[j - 1] > temp)
		{
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = temp;
		*/
		//判断前一个数是否大于temp
		for ( j > 0;  arr[j - 1] > temp; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[j] = temp;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("插入排序:%d\n", arr[i]);
	}
	return 0;
}