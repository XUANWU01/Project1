#include <stdio.h>

//�޲���
//�����ʽ
void _printf()
{
	printf("hello world\n");
}

int main04()
{
	//��������
	_printf();
	return 0;
}

//�вκ���
void printf_int(int value)
{
	printf("%d\n", value);
	return 0;
}

int main05(void)
{
	printf_int(100);
	return 0;
}