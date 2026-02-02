/*
 * main.c
 *
 *  Created on: Feb 2, 2026
 *      Author: kirollos
 */
#include <stdio.h>

int main()
{
	int n,i;
	float sum=0.0;
	float a[100];
	printf("enter the number of data :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	if(n>100||n<=0)
	{
		printf("error!!! number should be in range of (1 to 100)");
	}
	for(i=0;i<n;i++)
	{
		printf("%d. enter number:",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	printf("average = %f",sum/n);
	return 0;
}
