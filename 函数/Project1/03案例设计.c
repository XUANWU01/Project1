#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//加法运算
void Add(int num1, int num2)
{
	int sum = (int)num1 + num2;
	printf("相加结果：%d\n", sum);
}

//减法运算
void Sub(int num1, int num2)
{
	int sum = num1 - num2;
	printf("相减结果：%d\n", sum);
}

//乘法运算
void Mult(int num1, int num2)
{
	int sum = num1 * num2;
	printf("相乘结果：%d\n", sum);
}

//除法运算
void Div(int num1, int num2)
{
	if (num2 == 0)
		printf("被除数不能为0！");
	else
	{
		double sum = num1*0.1 / num2;
		printf("相除结果：%lf\n", sum);
	}
}

void main03()
{
	int num1, num2,i=5;
	char ch;
	printf("请输入运算表达式：\n");
	while (i>0)
	{
		scanf("%d%c%d", &num1, &ch, &num2);
		switch (ch)
		{
		case'+':
			Add(num1, num2);
			break;
		case'-':
			Sub(num1, num2);
			break;
		case'*':
			Mult(num1, num2);
			break;
		case'/':
			Div(num1, num2);
			break;
		default:
			printf("不想玩了滚！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！");
			break;
		}
		i--;
	}
}