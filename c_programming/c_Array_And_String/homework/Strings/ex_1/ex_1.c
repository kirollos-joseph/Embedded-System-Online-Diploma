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
	int i,num=0;
	char c;
	char a[100];
	printf("Enter a string:");
	fflush(stdin); fflush(stdout);
	gets(a);
	printf("Enter a character to find frequency:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);
	for(i=0;i<=strlen(a);i++)
	{
		if(a[i]==c)
		{
			num+=1;
		}

	}
	if(num>0)
	{
		printf("Frequency of %c = %d",c,num);
	}
	else
	{
		printf("character is not found");
	}
}
