#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//�ӷ�����
void Add(int num1, int num2)
{
	int sum = (int)num1 + num2;
	printf("��ӽ����%d\n", sum);
}

//��������
void Sub(int num1, int num2)
{
	int sum = num1 - num2;
	printf("��������%d\n", sum);
}

//�˷�����
void Mult(int num1, int num2)
{
	int sum = num1 * num2;
	printf("��˽����%d\n", sum);
}

//��������
void Div(int num1, int num2)
{
	if (num2 == 0)
		printf("����������Ϊ0��");
	else
	{
		double sum = num1*0.1 / num2;
		printf("��������%lf\n", sum);
	}
}

void main03()
{
	int num1, num2,i=5;
	char ch;
	printf("������������ʽ��\n");
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
			printf("�������˹�����������������������������������������������������������������������������������������");
			break;
		}
		i--;
	}
}