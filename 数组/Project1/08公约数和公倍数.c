#include <stdio.h>
#include <stdlib.h>

int main11()
{
	printf("������������������");
	int num1, num2,max=0,min;
	scanf("%d,%d", &num1, &num2);
	if (num1>num2)
	{
		int tmp = num1;
		num1 = num2;
		num2 = tmp;
	}
	//�ж����Լ��
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
		printf("û�����Լ����\n");
	} else {
	printf("���Լ��Ϊ��%d\n", max);
	}
	//�ж���С������
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
	printf("��С������Ϊ��%d\n", min);

	return 0;
}