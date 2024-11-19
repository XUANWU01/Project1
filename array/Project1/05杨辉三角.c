#include <stdio.h>
int main08() {
	int i, j, n = 0;
	int arr[30][30] = { 1 };
	while (n < 1 || n>50)
	{
		printf("请输入n的值：\n");
		scanf("%d", &n);
	}
	printf("%d行的杨辉三角如下：\n", n);
	for (i = 1; i < n; i++)
	{
		arr[i][0] = 1;
		for (j = 1; j <= i; j++)
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
	}
	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j <= i; j++)
			printf("%-6d", arr[i][j]);
		printf("\n");
	}
	return 0;
}