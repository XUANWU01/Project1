#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main01(){
	int i,j;
	int sum;
	for ( i = 1 ; i <= 9; i++)
	{
		for (j =1; j <= i; j++)
		{
			printf("%d*%d=%d\t", j, i, i * j);
		}
		printf("\n");
	}
	return 0;
}