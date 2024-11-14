#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void swap(int*p1,int *p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main02()
{
	int a, b, c;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	int temp;
	printf("请输入两个值：");
	scanf("%d%d%d", pa, pb,pc);
	if (*pa > *pb)
		swap(pa, pb);
	if (*pa > *pc)
		swap(pa, pc);
	if (*pb > *pc)
		swap(pb, pc);
	printf("排序后的数：%d %d %d\n", a, b,c);
	return 0;
}