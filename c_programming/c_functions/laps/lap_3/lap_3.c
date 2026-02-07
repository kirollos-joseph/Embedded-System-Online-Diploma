/*
 * main.c
 *
 *  Created on: Feb 7, 2026
 *      Author: kirollos
 */
#include <stdio.h>
#include <string.h>
int findName(char names[][14], int n, char name[])
{
	int i;
	for(i=0;i<n;i++)
	{
		if(strcmp(names[i], name) == 0)
		{
			return 1;
		}
	}
	return 0;
}
void main()
{
	char name[14];
	char names[5][14]={"Alaa","Osama","Mamdouh","Samy","Hossain"};
	puts("enter your first name:");
	fflush(stdin); fflush(stdout);
	gets(name);
	if(findName(names,5,name)==1)
		puts("Welcome");
	else
		puts("Goodby");


}
