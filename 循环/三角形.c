#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main04() {
	int i, j;
	int sum;
	printf("请输入一个数");
	scanf("%d",&sum);
	for (i = 1; i <= sum; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}