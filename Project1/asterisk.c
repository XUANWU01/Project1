#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main01() {
	/*char chr = 'a';
	int num = 10;
	printf("�ַ�Ϊ��%c\n����Ϊ��%d\n", chr, chr + num);
	float f1 = 12.3;
	double d1 = 12.34;
	_Bool b1 = 10;
	printf("����ֵΪ��%d\n", b1);*/

	int id;
	char name[10];
	float score;
	char rank;
	_Bool pass;
	printf("������ѧ�ţ�");
	scanf("%d", &id);
	getchar();//ˢ�»�����
	printf("������������");
	scanf("%s", name);
	printf("�����������");
	scanf("%f", &score);
	getchar();
	printf("�����뼶��");
	scanf("%c", &rank);
	getchar();
	printf("�������Ƿ�ͨ����");
	scanf("%c", &pass);
	printf("\n�ÿ�����Ϣ���£�\n");
	printf("ѧ�ţ�%d\n������%s\n������%f\n����%c\n�Ƿ�ͨ����%c\n", id,name,score, rank, pass);
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
	printf("�������������ݣ�");
	scanf("%d%d", & a, &b);
	printf("�������ĺͣ�%d\n",a+b);
	printf("�������Ĳ%d\n", a - b);
	printf("�������Ļ���%d\n", a * b);
	printf("���������̣�%d\n", a / b);
	printf("��������������%d\n", a % b);
	printf("a����֮��%d\n", a++);
	printf("a����֮��%d\n", a--);
	printf("b����֮��%d\n", b++);
	printf("b����֮��%d\n", b--);

	
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
	//���ڴ˺����ڴ��ļ�������������ݣ����� fun ������
	//������ݣ��ر��ļ��� 
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
	//printf("��ӭ�㣬%s��", name);

	printf("bool���ͣ�\t ������Ϊ%d\n", sizeof(_Bool));
	printf("char���ͣ�\t ������Ϊ%d\n", sizeof(char));
	printf("short int���ͣ�\t ������Ϊ%d\n", sizeof(short int));
	printf("int���ͣ�\t ������Ϊ%d\n", sizeof(int));
	printf("long int���ͣ�\t ������Ϊ%d\n", sizeof(long int));
	printf("float���ͣ�\t ������Ϊ%d\n", sizeof(float));
	printf("double���ͣ�\t ������Ϊ%d\n", sizeof(double));
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
