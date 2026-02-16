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
	int roll;
	float mark;
};
int main()
{
	struct Sstudent s;
	printf("enter information of students: \r\n");
	printf("enter name:");
	fflush(stdin); fflush(stdout);
	scanf("%s",s.name);
	printf("enter roll number:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&s.roll);
	printf("enter marks:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&s.mark);
	printf("name:%s",s.name);
	printf("\r\n Roll:%d",s.roll);
	printf("\r\n marks:%f",s.mark);
	return 0;
}
