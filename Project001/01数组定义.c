#include <stdio.h>

int main01(void)
{
	//�������
	//�������� ������ = ֵ
	//��������
	//�������� ������[Ԫ�ظ���]

	int arr[10];//�൱�ڶ���10�����ͱ���
	//ʹ�������±� �ҵ�����Ԫ�� ΪԪ�ظ�ֵ
	//�����±��Ǵ�0��ʼ�� ������Ԫ�ظ���-1Ϊ���ֵ 9
	arr[0] = 123;
	arr[1] = 234;
	arr[2] = 345;
	arr[9] = 8910;

	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	printf("%d\n", arr[2]);
	printf("%d\n", arr[9]);

	return 0;
}
int main02(void)
{
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr[10] = { 1,2,3,4,5 };
	int i;
	for (i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}