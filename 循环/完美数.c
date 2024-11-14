#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main06(void)
{
	long int num, sum=0, i, j;
	printf("请输入一个数");
	scanf("%d", &num);
	for ( i = 1; i <= num ; i++)
	{
		sum = 0;
		for (j = 1; j < i/2; j++)
		{
			if (i%j==0)
				sum += j;
		}
		if (sum==i)
			printf("完美数为：%d\n", sum);
	}
	
	return 0;
}

int main07()
{
	int i = 1, sum = 0;
	abc:if (i<=100)
	{
		sum += i;
		i++;
		goto abc;
	}
	printf("和值为：%d", sum);
	return 0;
}