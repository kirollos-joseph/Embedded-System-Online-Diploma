/*
 * main.c
 *
 *  Created on: Feb 16, 2026
 *      Author: kirollos
 */
#include <stdio.h>
int main()
{
	int arr[15],i,*ptr=arr,count;
	printf("Input the number of elements to store in the array (max 15) :");
	fflush(stdout);
	scanf("%d", &count);
	for(i=0;i<count;i++)
	{
		printf("element -%d :",i+1);
		fflush(stdout);
		scanf("%d",ptr);
		ptr++;
	}
	ptr= arr+count-1;
	printf("The elements of array in reverse order are :\r\n");
	for(i=count;i>0;i--)
	{
		printf("\n element -%d : %d",i,*ptr);
		ptr--;
	}
	return 0;
}
