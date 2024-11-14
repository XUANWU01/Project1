#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main03() {
	int num;
	for (int num = 1; num <= 1000; num++)
	{
		if (num%3==2&&num%5==3&&num%7==2)
		{
			printf("%d\n", num);
		}
	}
}