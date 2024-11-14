#include <stdio.h>

//无参数
//定义格式
void _printf()
{
	printf("hello world\n");
}

int main04()
{
	//函数调用
	_printf();
	return 0;
}

//有参函数
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