#include <stdio.h>

int main09(void)
{
	int a[4][5], b[5][4];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			a[i][j] = (j + 1) * 10 + i + 1;
			b[j][i] = a[i][j];//矩阵转置
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("转置后的数组为：");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", b[j][i]);
		}
		printf("\n");
	}
	return 0;
}