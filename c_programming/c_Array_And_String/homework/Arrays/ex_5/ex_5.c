/*
 * main.c
 *
 *  Created on: Feb 2, 2026
 *      Author: kirollos
 */
#include <stdio.h>
int main()
{
	int i,num,searched;
	int a[100];
	printf("Enter no of elements :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	if(num<=0||num>99)
	{
		printf("Error !!!! The number must be positive and the maximum is 100.");
		return 1;
	}
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&searched);
	for(i=0;i<num;i++)
	{
		if(a[i]==searched)
		{
			printf("Number found at the location = %d",i+1);
			break;
		}
	}
	if(i==num)
	{
		printf("Number not found");
	}
}

