/*
 * main.c
 *
 *  Created on: Feb 16, 2026
 *      Author: kirollos
 */
#include <stdio.h>
int main()
{
	int m;
	int *ab;
	m=29;
	printf("address of m : %p",&m);
	printf("\r\nvalue of m : %d",m);
	ab=&m;
	printf("\r\nNow ab is assigned with the address of m.");
	printf("\r\naddress of ab : %p",ab);
	printf("\r\nvalue of ab: %d",*ab);
	*ab=34;
	printf("\r\nThe value of m assigned to 34 now.");
	printf("\r\naddress of ab : %p",ab);
	printf("\r\nvalue of ab: %d",*ab);
	*ab=7;
	printf("\r\n The pointer variable ab is assigned with the value 7 now");
	printf("\r\naddress of m : %p",&m);
	printf("\r\nvalue of m : %d",m);
	return 0;
}
