/*
 * main.c
 *
 *  Created on: Feb 1, 2026
 *      Author: kirollos
 */
#include <stdio.h>
int main()
{
	int a;
	printf("enter an integer you want to check:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d is even",a);
	}
	else
		printf("%d is old",a);
	return 0;
}


