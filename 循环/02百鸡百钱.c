#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main02() {
	int  cock, hen, chick;
	//循环公鸡
	for (int cock = 0; cock <= 20; cock++)
	{
		//循环母鸡
		for (hen = 0; hen <= 33; hen++)
		{
			/*
			//循环小鸡
			for (chick = 0; chick <=100; chick++)
			{
				//判断条件是否符合
				if ((5 * cock + 3 * hen + chick / 3.0 == 100)&&(cock+hen+chick==100))
				{
					printf("公鸡=%d,母鸡=%d,小鸡=%d\n", cock, hen, chick);
				}
			}
			*/
			if (5 * cock + 3 * hen+(100-cock-hen)/3.0==100)
			{
				printf("公鸡=%d,母鸡=%d,小鸡=%d\n", cock, hen, 100 - cock - hen);
			}
		}
	}
	return 0;
}