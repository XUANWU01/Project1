#include <stdio.h>

int main01() 
{
	int scoer;
	printf("������һ���ɼ���");
	scanf("%d", &scoer);
	if (scoer > 700) {
		printf("��Ҫ���廪");
	}
	//printf("��Ҫ������");
	return 0;
}

int main02(void) 
{
	int scoer;
	printf("������һ���ɼ���");
	scanf("%d", &scoer);
	if (scoer>80)
	{
		printf("ȥ���ֳ���");
	}
	else
	{
		printf("ȥ��ϰ��");
	}
	return 0;
}

int main03()
{
	int a,b;
	printf("���������ųɼ���");
	scanf("%d %d", &a,&b);
	if ((a>90&&b>90)||(a==100&&b>80)|| (b == 100 && a > 80))
	{
		printf("������ɰ���");
	}
	else
	{
		printf("ȥ��ϰ��");
	}
	return 0;
}

int main04(void)
{
	int score;
	printf("������һ���ɼ���");
	scanf("%d", &score);
	if (score > 700)
	{
		printf("��Ҫ���廪\n");
	}
	else
	{
		printf("��Ҫ������\n");
	}
	return 0;
}

int main05(void)
{
	int score;
	printf("������һ���ɼ���");
	scanf("%d", &score);

	if (score > 700)
	{
		printf("��Ҫ���廪\n");
	}
	else if (score > 680)
	{
		printf("��Ҫ�ϱ���\n");
	}
	else
	{
		printf("��Ҫ������\n");
	}
	return 0;
}
