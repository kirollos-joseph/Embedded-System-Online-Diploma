/*
 * main.c
 *
 *  Created on: Feb 16, 2026
 *      Author: kirollos
 */
#include <stdio.h>
int main()
{
	char alph[27];
	int i;
	char *ptr;
	printf("The Alphabets are :");
	ptr=alph;
	for(i=0;i<26;i++,ptr++)
		*ptr=i+'A';
	ptr=alph;
	for(i=0;i<26;i++,ptr++)
		printf("\r\n %c \t",*ptr+i);
	return 0;
}
