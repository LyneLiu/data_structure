#include <stdio.h>
#include <stdlib.h>

int volume(int a,int b,int c)
{
	//计算长方体的体积
	int p;
	p = a * b * c;
	return p;
}

int main()
{
	int x,y,z,v;
	scanf("%d,%d,%d",&x,&y,&z);
	v = volume(x,y,z);

	printf("The volume of the triangle is:v=%d\n", v);

	system("pause");
	return 0;
}
