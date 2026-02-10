/*
 * main.c
 *
 *  Created on: Feb 7, 2026
 *      Author: kirollos
 */

#include <stdio.h>
void power(int x,int y)
{
	int i,z=1;
	printf("%d^%d =",x,y);
	for(i=0;i<y;i++)
	{
		z=z*x;
	}
	printf("%d",z);
}
int main()
{
	int x,y;
	printf("Enter base number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	printf("Enter power number(positive integer): ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&y);
	power(x,y);
	return 0;
}
