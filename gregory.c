/*
 *@author:lyne
 *@date:2015/3/23
 *@格里高利公式求解pi值
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	double t,pi;
	long int n,s;
	t = 1.0;
	n = 1;
	s = 1;
	pi = 0.0;
	while(fabs(t) > 1e-6)
	{
		pi = pi + t;
		n = n + 2;
		s = -s;
		t = (float)(s) / (float)(n);
	}

	pi = pi * 4;
	printf("the result is:%lf\n", pi);

	system("pause");
	return 0;
}