#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/**�ڼ����������Ҫǰһ����ǰ�����Ľ�������ּ��㷽ʽΪ�ݹ�
* �����Լ������Լ�
* ��ŵ�����ɣ�f(n+1)=2*f(n)+1
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
	printf("������Բ�̵ĸ�����");
	scanf("%d", &n);
	num = getNum(n);
	printf("��ŵ����%d��Բ�̹����ƶ�%d��\n", n, num);
	return 0;
}