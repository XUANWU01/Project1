#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

int main01(void)
{
	//���ִ��һ�� �ڲ�ִ��һ�� ���ִ�д���*�ڲ�ִ�д��� =��ִ�д���
	int i,j;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			printf("i=%d   j=%d\n", i, j);
		}
	}
	return 0;
}

int main02(void)
{
	int x, y, z;
	for (x = 0; x < 24; x++) {
		for (y = 0; y < 60; y++) {
			for (z = 0; z < 60; z++) {
				printf("%d :%d :%d", x, y, z);
				Sleep(960);//ϵͳ�ӳ�960����
				system("cls");//����
			}
		}
	}
}

int main(void)
{
	int i;
	int j;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d*%d=%d ", j, i, i * j);
		}
		printf("\n");
	}
	return 0;
}