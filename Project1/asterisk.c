#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main01() {
	/*char chr = 'a';
	int num = 10;
	printf("字符为：%c\n数字为：%d\n", chr, chr + num);
	float f1 = 12.3;
	double d1 = 12.34;
	_Bool b1 = 10;
	printf("布尔值为：%d\n", b1);*/

	int id;
	char name[10];
	float score;
	char rank;
	_Bool pass;
	printf("请输入学号：");
	scanf("%d", &id);
	getchar();//刷新缓冲区
	printf("请输入姓名：");
	scanf("%s", name);
	printf("请输入分数：");
	scanf("%f", &score);
	getchar();
	printf("请输入级别：");
	scanf("%c", &rank);
	getchar();
	printf("请输入是否通过：");
	scanf("%c", &pass);
	printf("\n该考生信息如下：\n");
	printf("学号：%d\n姓名：%s\n分数：%f\n级别：%c\n是否通过：%c\n", id,name,score, rank, pass);
	int num = 100;
	printf("%d %f %c", num, num, num);
}
	/*
	int s;
	scanf("%d", &s);
	while (s > 0)
	{
		switch (s)
		{
			case1:printf("%d", s + 5);
		case2:printf("%d", s + 4); break;
		case3:printf("%d", s + 3);
		default:printf("%d", s + 1); break;
		}
		scanf("%d", &s);
	}

int main(){
	int a, b;
	printf("请输入两个数据：");
	scanf("%d%d", & a, &b);
	printf("两个数的和：%d\n",a+b);
	printf("两个数的差：%d\n", a - b);
	printf("两个数的积：%d\n", a * b);
	printf("两个数的商：%d\n", a / b);
	printf("两个数的余数：%d\n", a % b);
	printf("a自增之后：%d\n", a++);
	printf("a自增之后：%d\n", a--);
	printf("b自增之后：%d\n", b++);
	printf("b自增之后：%d\n", b--);

	
	return 0;
}*/
/*
#include <stdio.h>
#include <string.h>
void fun(char* ss)
{
	int i, n = 0;
	char* p;
	p = ss;
	while (*p++ != '\0')
		n++;
	for (i = 1; i < n; i += 2)
		if (ss[i] >= 'a' && ss[i] <= 'z')
			ss[i] = ss[i]- 'a' + 'A';
}

void main(void)
{
	char tt[51]; void NONO();
	printf("\nPlease enter an character string within 50 characters:\n");
	gets(tt);
	printf("\n\nAfter changing, the string\n  \"%s\"", tt);
	fun(tt);
	printf("\nbecomes\n  \"%s\"", tt);
	NONO();
	getchar();
}

void NONO()
{
	//请在此函数内打开文件，输入测试数据，调用 fun 函数，
	//输出数据，关闭文件。 
	char tt[51], ch;
	FILE* rf, * wf;
	int len, i = 0;

	rf = fopen("in.dat", "r");
	wf = fopen("out.dat", "w");
	while (i < 10) {
		fgets(tt, 50, rf);
		len = strlen(tt) - 1;
		ch = tt[len];
		if (ch == '\n' || ch == 0x1a) tt[len] = 0;
		fun(tt);
		fprintf(wf, "%s\n", tt);
		i++;
	}
	fclose(rf);
	fclose(wf);
}


#include <stdio.h>
int main() {
	//char name[10];
	//scanf("%s", name);
	//printf("欢迎你，%s！", name);

	printf("bool类型：\t 我容量为%d\n", sizeof(_Bool));
	printf("char类型：\t 我容量为%d\n", sizeof(char));
	printf("short int类型：\t 我容量为%d\n", sizeof(short int));
	printf("int类型：\t 我容量为%d\n", sizeof(int));
	printf("long int类型：\t 我容量为%d\n", sizeof(long int));
	printf("float类型：\t 我容量为%d\n", sizeof(float));
	printf("double类型：\t 我容量为%d\n", sizeof(double));
	return 0;

}*/
//#include <stdio. h>

#define N 4

void fun(int a[][N], int b[])

{

	int i;

	for (i = 0; i < N; i++)

		b[i] = a[i][i];

}

main()

{

	int x[][N] = { {1,2,3}, {4}, {5,6,7,8}, {9, 10} }, y[N], i;

	fun(x, y);

	for (i = 0; i < N; i++)

		printf("%d,", y[i]);

	printf("\n");

}
