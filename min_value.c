#include <stdio.h>
#include <stdlib.h>

int min_value(int a,int b,int c)
{
	//返回三个数的最小值
	if (a < b)
	{
		if (a < c)
			return a;
		else
			return c;
	}
	else
	{
		if (b < c)
			return b;
		else
			return c;
	}
}

int main()
{
	int a,b,c,min;
	printf("Please input a,b,c:\n");
	scanf("%d,%d,%d",&a,&b,&c);
	min = min_value(a,b,c);

	printf("the min value is :%d\n", min);

	system("pause");
	return 0;
}