/*
 *@author：lyne
 *@date：2015/3/24
 *@利用筛选法求解素数：使用数组来表示自然数组，
 *@数组的每个元素的值为0或1（0表示不为素数，1表示为素数）
 */
#include <stdio.h>
#include <stdlib.h>
#define  RANGE	400

int main()
{
	char sieve[RANGE+1];
	int i,j,count;

	for(i = 0;i <= RANGE;i++)	sieve[i] = 1;	//初始化数组

	sieve[0] = sieve[1] = 0;
	count = 0;

	for(i = 2;i <= RANGE;i++)
	{
		if(sieve[i] == 1)		// i是素数，并且在后续数组中找出i的倍数，将其置0
		{
			printf("%5d", i);
			count++;
			if(count % 8 == 0)	printf("\n");
			for (j = i; j <= RANGE; j += i)
			{
				sieve[j] = 0;
			}
		}
	}

	printf("\n");
	system("pause");

	return 0;
}