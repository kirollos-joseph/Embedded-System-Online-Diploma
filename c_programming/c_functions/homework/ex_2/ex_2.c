/*
 * main.c
 *
 *  Created on: Feb 7, 2026
 *      Author: kirollos
 */

#include <stdio.h>

int factorial(int x)
{
	int f=1;
	for(;x>0;x--)
		f*=x;
	return f;
}
int main()
{
	int x;
	printf("Enter an positive integer:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	printf("factorial of %d = %d",x,factorial(x));
	return 0;
}
