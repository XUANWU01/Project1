#include<stdio.h>
#include<stdlib.h>

void func01()
{
	printf("����һ���޲�����\n");
}

char swap(char ch)
{
	char c;
	if (97 <= ch && ch <= 122)
		c = ch - 32;
	else
		printf("���ݵĲ���Ӣ����ĸ��\n");
	return c;
}

int main02() 
{
	char c = swap('b');
	printf("%c\n", c);
	return 0;
}