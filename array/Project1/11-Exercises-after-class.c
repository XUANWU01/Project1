#include <stdio.h>
#include <stdint.h>

int main14()
{
	//
	int arr[6];
	printf("��������������");
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


int main15()
{
	int arr1[4][4], arr2[4][4];
	printf("������һ��4x4�ľ���\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &arr1[i][j]);
			arr2[j][i] = arr1[i][j];
		}
	}
	
	printf("ת�ú������Ϊ��");
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


int main16(){
	int a = 1;
	int b = (++a) + (++a) + (++a);
	printf("%d",b);
	return 0;
}
