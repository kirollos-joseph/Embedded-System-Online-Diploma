/*
 * main.c
 *
 *  Created on: Feb 16, 2026
 *      Author: kirollos
 */
#include <stdio.h>
void main()
{
	int x[5],i;
	int sum =0;
	int* px=x;
	for(i=0;i<5;i++)
		scanf("%d \n",px+i);
	for(i=0;i<5;i++)
		printf("%d \n",*px++);
	px=x;
	for(i=0;i<5;i++,px++)
		sum+=*px;
	printf("%d \n",sum);
}

