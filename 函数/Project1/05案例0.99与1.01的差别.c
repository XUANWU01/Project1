#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


float power(float f, int n)
{
	float p = 1.0;
	while (n--)
		p *= f;
		return p;
}

int main05()
{
	int n = 30; 
	float f1 = power(0.99, n);
	float f2 = power(1.01, n);
	printf("��ÿ�����һ��㣬%d���Ժ�Ϊ��%f\n", n, f1);
	printf("��ÿ���˲�һ��㣬%d���Ժ�Ϊ��%f\n", n, f2);
	return 0;
}