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
	printf("当每天进步一点点，%d天以后为：%f\n", n, f1);
	printf("当每天退步一点点，%d天以后为：%f\n", n, f2);
	return 0;
}