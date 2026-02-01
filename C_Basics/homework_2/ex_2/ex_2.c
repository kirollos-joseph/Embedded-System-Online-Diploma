/*
 * main.c
 *
 *  Created on: Feb 1, 2026
 *      Author: kirollos
 */
#include <stdio.h>
int main()
{
	char character;
	printf("enter an alphabet:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&character);
	if(character=='a'|'e'|'i'|'o'|'u')
	{
		printf("%c is vowwel",character);
	}
	else
		printf("%c is consonant",character);
	return 0;
}


