#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main08()
{
	printf("һǧ���ڵĻ�������Ϊ\n");
	//10ѭ����1000����λû�л���
	int count = 0;
	for (int i = 10; i < 1000; i++)
	{
		_Bool fl = 1;//��ʶ��Ĭ��Ϊ����
		for (int j = 2; j <=i/2; j++)
		{
			if (i % j == 0)
			{
				fl = 0;//��ʶ��Ϊ�٣���Ϊ������
				break;//����ѭ��
			}
		}
		//�����ʶ��Ϊ�棬˵��������
		if (fl)
		{
			//�ж��Ƿ�Ϊ��λ��
			if (i/100==0)
			{
				//�жϸ�λ��ʮλ�Ƿ����
				if (i/10== i% 10)
				{
					printf("%d\t", i);
					count++;
				}
			}
			else
			{
				//����else��Ϊ��λ��
				if (i % 10 == i / 100)
				{
					printf("%d\t", i);
					count++;
				}
			}
		}
		if (count == 4)
		{
			printf("\n");
			count = 0;
		}
	}
}