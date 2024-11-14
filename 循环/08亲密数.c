#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("10000以内的亲密数");
		for (int i = 100; i < 1000; i++)
		{
			int num1 = i / 100;
			int num2 = i / 10 % 10;
			int num3 = i % 10;
			if (num1 * num1 * num1 + num2 * num2 * num2 + num3 * num3 * num3 == i)
			{

			}
		}
}