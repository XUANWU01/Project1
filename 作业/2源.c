#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 100, b = 200;	
	int* pa;		
	pa = &a;		
	int* pb = &b;
	printf("a的内存值：%p ,pa的内存值：%p ,pa的值：%p,pa的值：%d\n", &a, &pa, pa, pa);
	printf("pa指向的内存值:%d", *pa);
	int* pc = 0;	
	void* pd;	
	(int*)pd;	
	return 0;
}