/*
 * main.c
 *
 *  Created on: Feb 1, 2026
 *      Author: kirollos
 */
#include <stdio.h>
int main(){
	float a;
	printf("\r\n enter a numbers:");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a);
	if(a>0)
	{
		printf("%f is positive",a);
	}
	else if(a<0)
	{
		printf("%f is negative",a);
	}
	else
	{
		printf("you entered zero");
	}
	return 0;
}

