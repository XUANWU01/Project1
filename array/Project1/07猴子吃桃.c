#include <stdio.h>

int main10()
{
	int num=1;
	for (int i = 1; i < 10; i++)
	{
		num= (num + 1) * 2;
		printf("��%d�컹��%d����\n", i,num);
	}
	return 0;
}