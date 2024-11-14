#include <stdio.h>

int main12()
{
	int d=1;
	for (int a = 1; a <= 4; a++)
	{
		for (int  b = 1; b <= 4; b++)
		{
			for (int c = 1; c <= 4; c++)
			{
				if (a != b && a != c && b != c)
				{
					int num = (a * 100 + b * 10 + c);
					
					printf("%d ,%d\n",num,d);
					d++;
				}
			}
		}
	}
	return 0;
}