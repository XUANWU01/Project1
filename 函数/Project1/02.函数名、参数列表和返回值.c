#include<stdio.h>
#include<stdlib.h>

void func01()
{
	printf("这是一个无参数！\n");
}

char swap(char ch)
{
	char c;
	if (97 <= ch && ch <= 122)
		c = ch - 32;
	else
		printf("传递的不是英文字母！\n");
	return c;
}

int main02() 
{
	char c = swap('b');
	printf("%c\n", c);
	return 0;
}