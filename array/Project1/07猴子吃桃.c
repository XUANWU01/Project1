#include <stdio.h>

int main10()
{
	int num=1;
	for (int i = 1; i < 10; i++)
	{
		num= (num + 1) * 2;
		printf("第%d天还有%d个桃\n", i,num);
	}
	return 0;
}