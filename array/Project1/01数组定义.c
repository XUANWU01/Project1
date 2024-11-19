#include <stdio.h>

int main01(void)
{
	//定义变量
	//数据类型 变量名 = 值
	//定义数组
	//数据类型 数组名[元素个数]

	int arr[10];//相当于定义10个整型变量
	//使用数组下标 找到数组元素 为元素赋值
	//数组下标是从0开始的 到数组元素个数-1为最大值 9
	arr[0] = 123;
	arr[1] = 234;
	arr[2] = 345;
	arr[9] = 8910;

	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	printf("%d\n", arr[2]);
	printf("%d\n", arr[9]);

	return 0;
}
int main02(void)
{
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr[10] = { 1,2,3,4,5 };
	int i;
	for (i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}