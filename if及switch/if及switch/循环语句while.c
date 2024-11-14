#include <stdio.h>

int main()
{
	int  i=1;
	while (i<=100)
	{
		if((i%3==0)||((i/10==3)||(i % 10==3))) {
			printf("i=%d\n", i);
		}
		i++;
	}
	return 0;
}