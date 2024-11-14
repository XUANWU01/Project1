#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 6,7,8,9,10 };
	printf("%p\n", arr1);
	printf("%p\n", &arr1[0]);
	int* p4 = arr1;
	printf("%d\n", *(p4 + 1));
	if (arr1 > arr2)
		printf("1>2\n");
	return 0;

}