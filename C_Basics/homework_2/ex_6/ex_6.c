/*
 * main.c
 *
 *  Created on: Feb 1, 2026
 *      Author: kirollos
 */
#include <stdio.h>
int main()
{
	int a,i,sum=0;
	printf("enter a integer :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	{
		sum+=i;
	}
	printf("sum=%d",sum);
	return 0;
}



