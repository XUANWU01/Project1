#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main08()
{
	printf("一千以内的回文素数为\n");
	//10循环到1000，个位没有回文
	int count = 0;
	for (int i = 10; i < 1000; i++)
	{
		_Bool fl = 1;//标识符默认为素数
		for (int j = 2; j <=i/2; j++)
		{
			if (i % j == 0)
			{
				fl = 0;//标识符为假，则为非素数
				break;//跳出循环
			}
		}
		//如果标识符为真，说明是素数
		if (fl)
		{
			//判断是否为两位数
			if (i/100==0)
			{
				//判断个位和十位是否相等
				if (i/10== i% 10)
				{
					printf("%d\t", i);
					count++;
				}
			}
			else
			{
				//进入else则为三位数
				if (i % 10 == i / 100)
				{
					printf("%d\t", i);
					count++;
				}
			}
		}
		if (count == 4)
		{
			printf("\n");
			count = 0;
		}
	}
}