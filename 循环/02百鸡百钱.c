#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main02() {
	int  cock, hen, chick;
	//ѭ������
	for (int cock = 0; cock <= 20; cock++)
	{
		//ѭ��ĸ��
		for (hen = 0; hen <= 33; hen++)
		{
			/*
			//ѭ��С��
			for (chick = 0; chick <=100; chick++)
			{
				//�ж������Ƿ����
				if ((5 * cock + 3 * hen + chick / 3.0 == 100)&&(cock+hen+chick==100))
				{
					printf("����=%d,ĸ��=%d,С��=%d\n", cock, hen, chick);
				}
			}
			*/
			if (5 * cock + 3 * hen+(100-cock-hen)/3.0==100)
			{
				printf("����=%d,ĸ��=%d,С��=%d\n", cock, hen, 100 - cock - hen);
			}
		}
	}
	return 0;
}