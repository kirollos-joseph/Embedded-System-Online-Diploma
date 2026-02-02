/*
 * main.c
 *
 *  Created on: Feb 1, 2026
 *      Author: kirollos
 */
#include <stdio.h>
int main()
{
	float a,b,product;
	printf("enter two numbers");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&a,&b);
	printf("product: %f",product=a*b);
	return 0;
}
