/*
 * main.c
 *
 *  Created on: Feb 7, 2026
 *      Author: kirollos
 */

#include <stdio.h>
void prime(int x,int y)
{
	int i,j,p;
	printf("prime numbers between %d and %d are:",x,y);

	for(i=x;i<y;i++)
	{
		if(i<=1)
			continue;
		p=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				p=0;
				break;
			}
		}
		if(p==1)
		{
			printf("%d\t",i);
		}
	}

}
int main()
{
	int x,y;
	printf("Enter two numbers(intervals):");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&x,&y);
	prime(x,y);
	return 0;
}
