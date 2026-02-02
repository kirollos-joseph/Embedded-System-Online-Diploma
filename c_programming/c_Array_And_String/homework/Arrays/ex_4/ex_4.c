/*
 * main.c
 *
 *  Created on: Feb 2, 2026
 *      Author: kirollos
 */
#include <stdio.h>
int main()
{
	int i,num,new_num,location;
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
	printf("Enter the element to be inserted :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&new_num);
	printf("Enter the location:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&location);
	if(location > num + 1 || location <= 0)
	    {
	        printf("Error: Invalid location! You can insert between 1 and %d.\n", num + 1);
	        return 1;
	    }
	for(i=num;i>=location;i--)
	{
		a[i]=a[i-1];
	}
	a[location-1]=new_num;
	num++;
	for(i=0;i<num;i++)
	{
		printf("%d\t",a[i]);
	}

	return 0;
}

