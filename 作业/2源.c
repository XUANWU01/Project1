#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 100, b = 200;	
	int* pa;		
	pa = &a;		
	int* pb = &b;
	printf("a���ڴ�ֵ��%p ,pa���ڴ�ֵ��%p ,pa��ֵ��%p,pa��ֵ��%d\n", &a, &pa, pa, pa);
	printf("paָ����ڴ�ֵ:%d", *pa);
	int* pc = 0;	
	void* pd;	
	(int*)pd;	
	return 0;
}