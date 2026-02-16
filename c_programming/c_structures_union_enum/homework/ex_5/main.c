/*
 * main.c
 *
 *  Created on: Feb 10, 2026
 *      Author: kirollos
 */
#include <stdio.h>
#define pi 3.1412
#define area(r)(pi*(r)*(r))
int main()
{
	int radius;
	float area;
	printf("enter the raduis");
	fflush(stdin); fflush(stdout);
	scanf("%d",&radius);
	area=area(radius);
	printf("area=%.2f",area);
	return 0;
}

