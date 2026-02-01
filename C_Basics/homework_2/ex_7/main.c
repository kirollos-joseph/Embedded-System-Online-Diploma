/*
 * main.c
 *
 *  Created on: Feb 1, 2026
 *      Author: kirollos
 */
#include <stdio.h>
int main()
{
	int a,i,sum=1;
	printf("enter a integer :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	if(a>=0)
	{
		for(i=1;i<=a;i++)
		{
			sum*=i;
		}
		printf("factorial=%d",sum);
	}
	else
	{
		printf("error !!! factorial of negative number doesn't exist.");
	}
	return 0;
}

