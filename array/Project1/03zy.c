#include <stdio.h>
#include <stdlib.h>
int main06()
{
	float score[20];
	printf("������ 20 ��ѧ���ĳɼ�:\n");
	for (int i = 0; i < 20; i++)
		scanf("%f", &score[i]);
	int i, j;
	int temp;
	for (int i = 0; i < 20; i++)
	{
		//��ȡ��ǰԪ�ص�ֵ������
		temp = score[i];
		j = i;
		//�ж�ʱ��������Խ�磬ӦΪ����ǰ��һλԪ�ؽ��бȽϣ�����j����СֵΪ1
		while (j > 0 && score[j - 1] < temp)
		{
			score[j] = score[j - 1];
			j--;
		}
		score[j] = temp;
	}
	printf("�Ӵ�С����:\n");
	for (int i = 0; i < 20; i++)
	{
		printf("%.2f\n",score[i]);
		if (i == 9)
			printf("\n");
	}
	return 0;
}