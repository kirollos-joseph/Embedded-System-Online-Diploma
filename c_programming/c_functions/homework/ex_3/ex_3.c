/*
 * main.c
 *
 *  Created on: Feb 7, 2026
 *      Author: kirollos
 */
#include <stdio.h>
#include <string.h>
void reverse(char a[100])
{
	int i;
	for(i=strlen(a)-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
}

int main()
{
	char a[100];
	printf("Enter a sentence:");
	fflush(stdin); fflush(stdout);
	gets(a);
	reverse(a);
	return 0;
}

