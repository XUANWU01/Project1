#define _CRT_SECURE_NO_WARNIGS
#include <stdio.h>
#include <stdlib.h>

/*
int main06()
{
	int num1;
	printf("�����밲ȫ����");
	scanf("%d", &num1);
	switch (num1)
	{
		case 1:
			printf("��ȫ����\n");
			break;
		case 2:
			printf("���棡�����豸\n");
			break;
		case 3:
			printf("Σ�գ����������鿴\n");
			break;
		case 4:
			printf("Σ�ղ�����������ֹͣ����\n");
			break;
		default:
			printf("��ص���������\n");
			break;
	}
	return 0;
}*/


//��������
void sumbyrow(int(*arr)[4], int row, int* sum);
void sumbycol(int(*arr)[4], int col, int* sum);
int main07()
{
	int dataTable[5][4] = { 0 };			//�������ݱ�
	int i, j;
	printf("¼�������С�����������\n");
	for ( i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++) 
			dataTable[i][j] = i * 4 + j;
	}
	printf("¼��ɹ�\n");
	int(*p)[4] = dataTable;					//��������ָ��
	printf("���������ݣ�\n");
	for ( i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
			printf("\t%d", *(*(p + i) + j));
		printf("\n");
	}
	int select, pos, sum;
	void (*q)() = NULL;						//���庯��ָ��
	//���
	printf("��������ͷ�ʽ����Ϊ0/��Ϊ1����");
		scanf("%d", &select);
	printf("ѡ����/�У�");
		scanf("%d", &pos);
	if (select == 0)
	{
		printf("������ͣ���%d������", pos);
		q = sumbyrow;
	}
	else if (select == 1) 
	{
		printf("�������У���%d������", pos);
		q = sumbycol;
	}
	(*q)(dataTable, pos, &sum);
	printf("��ͽ����%d\n", sum);
	return 0;
}
//�������
void sumbyrow(int(*arr)[4], int row, int* sum)
{
	int i = 0;
	*sum = 0;
	for ( i = 0; i < 4; i++)
		*sum += *(*(arr + row - 1) + i);
}
//�������
void sumbycol(int(*arr)[4], int col, int* sum)
{
	int i = 0;
	*sum = 0;
	for (i = 0; i < 5; i++)
		*sum += *(*(arr + i) + col - 1);
}