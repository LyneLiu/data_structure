#include <stdio.h>
#include <stdlib.h>

void proc()
{
	printf("Hello.\n");
}

int func()
{
	return(2);
}

int main()
{
	int a;
	a = 3;
	proc();
	a = func();
	printf("This is a sample of c program.\n");

	system("pause");
	return 0;
}