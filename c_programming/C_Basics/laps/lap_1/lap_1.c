/*
 * main.c
 *
 *  Created on: Feb 1, 2026
 *      Author: kirollos
 */

#include "stdio.h"
int main ()
{
	float radius,area,circumference;
	char choice;
	printf("enter circle radius ?");
	fflush(stdin); fflush(stdout);
	scanf("%f", &radius);
	printf("enter your choice (a to print the area, c to print the circumference)");
	fflush(stdin); fflush(stdout);
	scanf("%c", &choice);
	if(choice=='a')
	{
		area = 3.14*radius*radius;
		printf("\r\n area is %f\r\n", area);
	}
	else if (choice=='b')
	{
		circumference=2*3.14*radius;
		printf("\r\n circumference is %f\r\n", circumference);
	}
	else
	{
    printf("\r\n wrong choice");
	}

}
