#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/**在计算过程中需要前一步或前几步的结果，这种计算方式为递归
* 函数自己调用自己
* 汉诺塔规律：f(n+1)=2*f(n)+1
int getsum(int n)
{
	if (n == 1)
		return 1;
	int temp = getsum(n - 1);
	return temp + n;
}
*/

int getNum(int n)
{
	if (n == 1)
		return 1;
	else
		return 2 * getNum(n - 1) + 1;
	return 0;
}

int main04()
{
	int n, num;
	printf("请输入圆盘的个数：");
	scanf("%d", &n);
	num = getNum(n);
	printf("汉诺塔中%d个圆盘共需移动%d次\n", n, num);
	return 0;
}