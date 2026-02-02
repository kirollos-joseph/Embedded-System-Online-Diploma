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
	printf("enter a character :");
	fflush(stdin); fflush(stdout);
	scanf("%c",&a);
	if((a>='a'&& a<='z')||(a>='A'&&a<='Z'))
	{
		printf("%C is an alphabet",a);
	}
	else
	{
		printf("%C is not an alphabet",a);
	}
	return 0;
}

