#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main01() 
{
	int a, b;
	int* pa = &a;
	int* pb = &b;
	printf("����������ֵ��");
	scanf("%d%d", pa, pb);
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
	printf("���������������%d %d\n", a, b);
	return 0;
}