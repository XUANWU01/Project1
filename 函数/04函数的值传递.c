#include <stdio.h>

//�ں�����ʵ�����������Ľ���
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	printf("���������ݣ�\n");
	printf("a=%d\n", a);
	printf("b=%d\n", b);
}
int main06(void)
{
	int a = 10;
	int b = 20;
	swap(a, b);
	printf("����ǰ���ݣ�\n");
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	return 0;
}