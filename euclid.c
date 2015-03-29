/*最大公因子求解*/
#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char const *argv[])
{
	int m,n,r;
	puts("Please input the numbers:");
	scanf("%d,%d",&m,&n);
	printf("\n%d 和 %d 的最大公因子为：",m,n);

	r = m % n;
	while(r != 0)
	{
		m = n;
		n = r;
		r = m % n;
	}

	printf("%d\n", n);

	system("pause");
	return 0;
}