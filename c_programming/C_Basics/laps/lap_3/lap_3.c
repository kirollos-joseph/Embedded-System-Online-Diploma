/*
 * main.c
 *
 *  Created on: Feb 1, 2026
 *      Author: kirollos
 */


#include <stdio.h>
int main()
{
	int a,b;
	printf("\r\n enter two number\r\n");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &a,&b);
	printf("\r\n the minimum is %d", (a<b)?a:b);
}
