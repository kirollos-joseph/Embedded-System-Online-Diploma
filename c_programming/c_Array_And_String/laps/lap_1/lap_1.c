/*
 * main.c
 *
 *  Created on: Feb 2, 2026
 *      Author: kirollos
 */
/*
 * main.c
 *
 *  Created on: Feb 2, 2026
 *      Author: kirollos
 */

#include <stdio.h>

int main()
{
	int i;
	float degree[10];
	for(i=0;i<10;i++)
	{
		printf("enter student %d degree :",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&degree[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("student %d degree is %f \r\n",i+1,degree[i]);

	}
	return 0;
}


