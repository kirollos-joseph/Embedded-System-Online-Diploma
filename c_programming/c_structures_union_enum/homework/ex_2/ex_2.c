/*
 * main.c
 *
 *  Created on: Feb 10, 2026
 *      Author: kirollos
 */
#include <stdio.h>
struct Sdistanse
{
	float feet;
	float inch;
};
struct Sdistanse adddistanse(struct Sdistanse a,struct Sdistanse b)
{
	struct Sdistanse sum;
	sum.feet=a.feet+b.feet;
	sum.inch=a.inch+b.inch;
	while (sum.inch>=12.0)
	{
		sum.inch=sum.inch-12.0;
		sum.feet=sum.feet+1.0;
	}
	return sum;
}
int main()
{
	struct Sdistanse a,b,sum;
	printf("enter information for 1st distance");
	printf("\r\n enter feet:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a.feet);
	printf("enter inch:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a.inch);
	printf("\r\n enter information for 2nd distance");
	fflush(stdin); fflush(stdout);
	printf("\r\n enter feet:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b.feet);
	printf("enter inch:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b.inch);
	sum=adddistanse(a,b);
	printf("Sum of distances = %.1f'-%.1f\"", sum.feet, sum.inch);
}
