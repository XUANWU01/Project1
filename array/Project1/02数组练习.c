#include <stdio.h>
#include <stdlib.h>

//ð������
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

//ѡ������
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
	printf("ѡ������");
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}


//��������
int main05(void)
{
	int arr[10] = { 9,5,7,8,6,10,2,4,3,1 };
	int i, j;
	int temp;
	for (int i = 0; i < 10; i++)
	{
		//��ȡ��ǰԪ�ص�ֵ������
		temp = arr[i];
		j = i;
		//�ж�ʱ��������Խ�磬ӦΪ����ǰ��һλԪ�ؽ��бȽϣ�����j����СֵΪ1
		/**while (j > 0 && arr[j - 1] > temp)
		{
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = temp;
		*/
		//�ж�ǰһ�����Ƿ����temp
		for ( j > 0;  arr[j - 1] > temp; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[j] = temp;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("��������:%d\n", arr[i]);
	}
	return 0;
}