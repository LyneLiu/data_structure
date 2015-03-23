/*
 *@author:lyne
 *@date:2015/3/23
 *@枚举函数：两个乒乓球队进行比赛，甲队为A,B,C三人，乙队为X,Y,Z三人，
 *@已抽签决定比赛名单。其中，A不和X比，C不和X、Z比
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,k;	//用i,j,k分别表示A,B,C三队的对手

	for(i = 'X';i<='Z';i++)
		for(j = 'X';j<='Z';j++)
			if(i != j)
				for(k = 'X';k<='Z';k++)
					if(i != k && j != k)
						if(i != 'X' && (k != 'X' && k != 'Z'))
							printf("A-->%c\tB-->%c\tC-->%c\n",i,j,k);

	system("pause");
	return 0;
}