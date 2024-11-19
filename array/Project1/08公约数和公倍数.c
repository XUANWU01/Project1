#include <stdio.h>
#include <stdlib.h>

int main11()
{
	printf("请输入两个正整数：");
	int num1, num2,max=0,min;
	scanf("%d,%d", &num1, &num2);
	if (num1>num2)
	{
		int tmp = num1;
		num1 = num2;
		num2 = tmp;
	}
	//判断最大公约数
	for (int i = num1/2; i >0; i--)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			max = i;
			break;
		}
	}
	if (max == 1)
	{
		printf("没有最大公约数！\n");
	} else {
	printf("最大公约数为：%d\n", max);
	}
	//判断最小公倍数
	int i=1;
	while(i<=num1)
	{
		if (num2 * i % num1 == 0)
		{
			min = num2*i;
			break;
		}
		i++;
	}
	printf("最小公倍数为：%d\n", min);

	return 0;
}