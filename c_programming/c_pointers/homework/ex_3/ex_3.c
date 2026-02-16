/*
 * main.c
 *
 *  Created on: Feb 16, 2026
 *      Author: kirollos
 */
#include <stdio.h>
#include <string.h>
int main()
{
	int i,x;
	char str[150],restr[150];
	char *ptr1,*ptr2;
	printf("\r\n Input a string :");
	fflush(stdout);
	gets(str);
	x=strlen(str);
	if (x > 0 && str[x - 1] == '\n') {
		str[x - 1] = '\0';
		x--;
	}
	ptr1=str+x-1;
	ptr2=restr;
	for(i=0;i<x;i++)
	{
		*ptr2=*ptr1;
		ptr2++;
		ptr1--;
	}
	*ptr2='\0';
	printf("\r\n Reverse of the string is : %s",restr);
	return 0;
}
