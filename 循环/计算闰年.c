#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main05(void)
{
	printf("请输入 年 月 日");
	int year, month, day, sum = 0;
	scanf("%d %d %d", &year, &month, &day);
		switch (month)
		{
		case 12:
			sum += 30;
		case 11:
			sum += 30;
		case 10:
			sum += 30;
		case 9:
			sum += 30;
		case 8:
			sum += 30;
		case 7:
			sum += 30;
		case 6:
			sum += 30;
		case 5:
			sum += 30;
		case 4:
			sum += 30;
		case 3:
			if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			{
				sum += 29;
			}
			else
			{
				sum += 28;
			}
		case 2:
			sum += 30;
		case 1:
			sum += day;
			break;
		default:
			printf("输入错误");
			break;
		}
}
