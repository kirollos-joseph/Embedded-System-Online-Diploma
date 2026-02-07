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
	printf("factorial(10) = %d\r\n",factorial(10));
	printf("factorial(0) = %d\r\n",factorial(0));
	printf("factorial(5) = %d\r\n",factorial(5));
	return 0;
}
