/*
 * main.c
 *
 *  Created on: Feb 2, 2026
 *      Author: kirollos
 */
#include <stdio.h>

int main()
{
	float a[3][3];
	float t[3][3];
	int r,c;
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("enter the item(%d,%d) :",r,c);
			fflush(stdin); fflush(stdout);
			scanf("%f",&a[r][c]);
		}

	}
	printf("the matrix is \n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%f\t",a[r][c]);
		}
		printf("\r\n");
	}
	printf("the transpose is \n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			t[r][c]=a[c][r];
		}
	}
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%f\t",t[r][c]);
		}
		printf("\r\n");
	}
	return 0;
}
