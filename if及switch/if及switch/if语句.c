#include <stdio.h>

int main01() 
{
	int scoer;
	printf("请输入一个成绩：");
	scanf("%d", &scoer);
	if (scoer > 700) {
		printf("我要上清华");
	}
	//printf("我要上蓝翔");
	return 0;
}

int main02(void) 
{
	int scoer;
	printf("请输入一个成绩：");
	scanf("%d", &scoer);
	if (scoer>80)
	{
		printf("去游乐场！");
	}
	else
	{
		printf("去补习班");
	}
	return 0;
}

int main03()
{
	int a,b;
	printf("请输入两门成绩：");
	scanf("%d %d", &a,&b);
	if ((a>90&&b>90)||(a==100&&b>80)|| (b == 100 && a > 80))
	{
		printf("暑假自由按排");
	}
	else
	{
		printf("去补习班");
	}
	return 0;
}

int main04(void)
{
	int score;
	printf("请输入一个成绩：");
	scanf("%d", &score);
	if (score > 700)
	{
		printf("我要上清华\n");
	}
	else
	{
		printf("我要上蓝翔\n");
	}
	return 0;
}

int main05(void)
{
	int score;
	printf("请输入一个成绩：");
	scanf("%d", &score);

	if (score > 700)
	{
		printf("我要上清华\n");
	}
	else if (score > 680)
	{
		printf("我要上北大\n");
	}
	else
	{
		printf("我要上蓝翔\n");
	}
	return 0;
}
