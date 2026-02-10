/*
 * main.c
 *
 *  Created on: Feb 10, 2026
 *      Author: kirollos
 */
#include <stdio.h>
struct Sstudent
{
	char name[20];
	float mark;
};
int main()
{
	struct Sstudent s[10];
	int i;
	printf("enter information of students: \r\n");
	for(i=0;i<10;i++)
	{
		printf("for roll number %d: \r\n",i+1);
		printf("enter name:");
		fflush(stdin); fflush(stdout);
		scanf("%s",&s[i].name);
		printf("enter marks:");
		fflush(stdin); fflush(stdout);
		scanf("%f",&s[i].mark);
	}
	for(i=0;i<10;i++)
	{
		printf("\r\n for roll number %d:",i+1);
		printf("\r\n name:%s",s[i].name);
		printf("\r\n marks:%f",s[i].mark);
	}
	return 0;
}
