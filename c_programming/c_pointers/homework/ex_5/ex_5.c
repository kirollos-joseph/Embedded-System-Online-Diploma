/*
 * main.c
 *
 *  Created on: Feb 16, 2026
 *      Author: kirollos
 */
#include <stdio.h>

struct employee
{
	char *empname;
	int empid;
};

int main()
{
	static struct employee emp1={"John",1001}, emp2={"Alex",1002}, emp3={"Taylor",1003};
	struct employee *arr[]={&emp1,&emp2,&emp3};
	struct employee *(*pt)[3]=&arr;

	printf("\n Pointer : Show a pointer to an array which contents are pointer to structure :\n");
	printf("-----------------------------------------------------------------------------------\n");

	printf(" Exmployee Name : %s \n",(**(*pt+1)).empname);
	printf(" Employee ID :  %d\n",(*(*pt+1))->empid);

	return 0;
}
