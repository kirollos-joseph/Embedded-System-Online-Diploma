/*
 * main.c
 *
 *  Created on: Feb 1, 2026
 *      Author: kirollos
 */

#include <stdio.h>
int main()
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
