/*
 * main.c
 *
 *  Created on: Feb 1, 2026
 *      Author: kirollos
 */

#include <stdio.h>
int main()
{
	int nstudent ,i;
	float degree,sum=0;
	printf("enter the number of students");
	fflush(stdin); fflush(stdout);
	scanf("%d", &nstudent);
	for(i=0;i<nstudent;i++)
	{
		printf("enter the degree of students (%d)",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&degree);
		sum+=degree;
	}
	printf("average students degree is : %f",sum/nstudent);




}
