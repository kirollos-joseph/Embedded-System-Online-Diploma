/*
 * main.c
 *
 *  Created on: Feb 1, 2026
 *      Author: kirollos
 */
#include <stdio.h>
int main()
{
	float a,b;
	printf("Enter value of a:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);
	swap(&a,&b);
	printf("After swapping, value of a = %f",a);
	printf("\r\n After swapping, value of b = %f",b);
	return 0;
}
void swap(float*a,float*b)
{
	float temp;
	temp= *a;
	*a=*b;
	*b=temp;

}
