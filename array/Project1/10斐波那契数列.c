#include <stdio.h>
#include <stdint.h>

int main13()
{
	int arr[13] = { 0 };
	arr[1] = 1;
	arr[2] = 1;
	int a=1,b=1,c;
	for (int i = 3; i < 13; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
		c = a + b;
		a = b;
		b = c;
		printf("%d����������%d��\n",i, c);
		printf("%d���º�������%d��\n", i, arr[i]);
	}
		printf("һ���������%d��\n", arr[12]);
	return 0;
}