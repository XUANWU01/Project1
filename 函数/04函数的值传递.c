#include <stdio.h>

//在函数中实现了两个数的交换
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	printf("交换后数据：\n");
	printf("a=%d\n", a);
	printf("b=%d\n", b);
}
int main06(void)
{
	int a = 10;
	int b = 20;
	swap(a, b);
	printf("交换前数据：\n");
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	return 0;
}