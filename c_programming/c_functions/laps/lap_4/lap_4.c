/*
 * main.c
 *
 *  Created on: Feb 7, 2026
 *      Author: kirollos
 */

#include <stdio.h>
void fun()
{
	int i,j;
	for(i=0;i<=9;i++)
	{
		for(j=0+i;j<=9;j++)
		{
			printf("%d",j);
		}
		printf("\r\n");
	}
}
int main()
{
	fun();
}
