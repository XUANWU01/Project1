#include <stdio.h>
#include <stdlib.h>
int main06()
{
	float score[20];
	printf("请输入 20 名学生的成绩:\n");
	for (int i = 0; i < 20; i++)
		scanf("%f", &score[i]);
	int i, j;
	int temp;
	for (int i = 0; i < 20; i++)
	{
		//获取当前元素的值和索引
		temp = score[i];
		j = i;
		//判断时索引不能越界，应为是与前面一位元素进行比较，所以j的最小值为1
		while (j > 0 && score[j - 1] < temp)
		{
			score[j] = score[j - 1];
			j--;
		}
		score[j] = temp;
	}
	printf("从大到小排序:\n");
	for (int i = 0; i < 20; i++)
	{
		printf("%.2f\n",score[i]);
		if (i == 9)
			printf("\n");
	}
	return 0;
}