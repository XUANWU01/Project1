#define _CRT_SECURE_NO_WARNIGS
#include <stdio.h>
#include <stdlib.h>

/*
int main06()
{
	int num1;
	printf("请输入安全级别：");
	scanf("%d", &num1);
	switch (num1)
	{
		case 1:
			printf("安全生产\n");
			break;
		case 2:
			printf("警告！请检查设备\n");
			break;
		case 3:
			printf("危险！！请立即查看\n");
			break;
		case 4:
			printf("危险操作！！！已停止生产\n");
			break;
		default:
			printf("监控到参数错误\n");
			break;
	}
	return 0;
}*/


//函数声明
void sumbyrow(int(*arr)[4], int row, int* sum);
void sumbycol(int(*arr)[4], int col, int* sum);
int main07()
{
	int dataTable[5][4] = { 0 };			//定义数据表
	int i, j;
	printf("录入数据中······\n");
	for ( i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++) 
			dataTable[i][j] = i * 4 + j;
	}
	printf("录入成功\n");
	int(*p)[4] = dataTable;					//定义数组指针
	printf("请输入数据：\n");
	for ( i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
			printf("\t%d", *(*(p + i) + j));
		printf("\n");
	}
	int select, pos, sum;
	void (*q)() = NULL;						//定义函数指针
	//求和
	printf("请输入求和方式（行为0/列为1）：");
		scanf("%d", &select);
	printf("选择行/列；");
		scanf("%d", &pos);
	if (select == 0)
	{
		printf("按行求和，第%d行数据", pos);
		q = sumbyrow;
	}
	else if (select == 1) 
	{
		printf("按行求列，第%d列数据", pos);
		q = sumbycol;
	}
	(*q)(dataTable, pos, &sum);
	printf("求和结果：%d\n", sum);
	return 0;
}
//按行求和
void sumbyrow(int(*arr)[4], int row, int* sum)
{
	int i = 0;
	*sum = 0;
	for ( i = 0; i < 4; i++)
		*sum += *(*(arr + row - 1) + i);
}
//按列求和
void sumbycol(int(*arr)[4], int col, int* sum)
{
	int i = 0;
	*sum = 0;
	for (i = 0; i < 5; i++)
		*sum += *(*(arr + i) + col - 1);
}