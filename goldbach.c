/*
 *@author:lyne
 *@date:2015/3/23
 *@哥德巴赫猜想：输入一个偶数，发现两个素数，其和等于所输入的偶数
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//判断num是否为prime素数
bool is_prime(int num)
{
	int i,n = num;
	int k;
	k = floor(sqrt(double(n)));	//如果小于等于i的平方根的数都除不尽，则i必是素数
	for(i=2;i<=k;i++)
	{
		if (n % i == 0)
			return false;
		else
			continue; 
	}

	return true;
}

int main()
{
	int num;
	int p,q;
	printf("Please input the num:\n");
	scanf("%d",&num);
	bool flagp,flagq;
	// 该偶数为大于5的整数
	 if (num % 2 != 0 || num <= 4)
	 {
	 	printf("the input number error\n");
	 	return 0;			
	 }

	 for((p=2,q=num-p);p <= q;(p++,q=num-p))
	 {
	 	flagp = is_prime(p);
	 	flagq = is_prime(q);
	 	// printf("bool value:%d,%d\n", flagp,flagq);
	 	while(flagp && flagq)
	 		{
	 			printf("%d = %d + %d\n", num,p,q );
	 			system("pause");
	 			return 1;
	 		}
	 }

	 printf("There is no primes that can add to the number!\n");
	 system("pause");
	 return 0;

}