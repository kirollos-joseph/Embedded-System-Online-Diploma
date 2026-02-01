/*
 * main.c
 *
 *  Created on: Feb 1, 2026
 *      Author: kirollos
 */


#include <stdio.h>
int main()
{
	int a, b, sum ;
	printf("enter two integers:");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&a ,&b);
	printf("sum: %d",sum=a+b);
	fflush(stdin); fflush(stdout);
	return 0;
}
