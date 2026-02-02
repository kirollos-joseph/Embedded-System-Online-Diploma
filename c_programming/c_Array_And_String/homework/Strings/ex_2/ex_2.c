/*
 * main.c
 *
 *  Created on: Feb 2, 2026
 *      Author: kirollos
 */
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100],i;
	printf("Enter a string:");
	fflush(stdin); fflush(stdout);
	gets(a);
	for(i=0;a[i]!='\0';i++);
	printf("Length of string: %d",i);

}
