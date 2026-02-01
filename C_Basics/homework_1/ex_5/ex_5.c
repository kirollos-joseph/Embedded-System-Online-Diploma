/*
 * main.c
 *
 *  Created on: Feb 1, 2026
 *      Author: kirollos
 */
#include <stdio.h>
int main()
{
	char a;
	printf("Enter a character:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&a);
	printf("ASCII value of %c=%d",a,a);
	return 0;
}

