/*
 * main.c
 *
 *  Created on: Feb 2, 2026
 *      Author: kirollos
 */
#include <stdio.h>

int  main()
{
	float a[2][2];
	float b[2][2];
	float sum[2][2];
	int r,c;
	printf("enter the elements of 1st matrix\r\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("enter a%d%d:",r+1,c+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&a[r][c]);
		}
	}
	printf("enter the elements of 2st matrix\r\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("enter a%d%d:",r+1,c+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&b[r][c]);
		}
	}
	printf("sum of matrix:\r\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			sum[r][c]=a[r][c]+b[r][c];
			printf("%f\t",sum[r][c]);
		}
		printf("\r\n");
	}
	return 0;
}
