/*
 * main.c
 *
 *  Created on: Feb 2, 2026
 *      Author: kirollos
 */
#include <stdio.h>
int main()
{
	int r,c,numr,numc;
	int a[100][100];
	printf("Enter rows and columns of a matrix:");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&numr,&numc);
	if((numr<0||numr>100)||(numc<0||numc>100))
	{
		printf("Error!! Rows and columns must be a positive number and a maximum of 100.");
		return 1;
	}
	printf("Enter elements of matrix :\r\n");
	for(r=0;r<numr;r++)
	{
		for(c=0;c<numc;c++)
		{
			printf("Enter elements a%d%d :",r+1,c+1);
			fflush(stdin); fflush(stdout);
			scanf("%d",&a[r][c]);
		}
	}
	printf("Entered Matrix :\r\n");
	for(r=0;r<numr;r++)
	{
		for(c=0;c<numc;c++)
		{
			printf("%d\t",a[r][c]);
		}
		printf("\r\n");
	}
	printf("transpose Matrix :\r\n");
	for(r=0;r<numc;r++)
	{
		for(c=0;c<numr;c++)
		{
			printf("%d\t",a[c][r]);
		}
		printf("\r\n");
	}
	return 0;
}
