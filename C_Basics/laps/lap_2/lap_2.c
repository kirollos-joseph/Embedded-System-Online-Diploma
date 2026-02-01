/*
 * main.c
 *
 *  Created on: Feb 1, 2026
 *      Author: kirollos
 */
#include <stdio.h>
int main(){
	int a,b,c;
	printf("\r\n enter three numbers");
	fflush(stdin); fflush(stdout);
	scanf("%d %d %d", &a ,&b ,&c );
	if(a>b)
	{
		if(a>c)
			printf("\r\n the largest value is %d", a);
		else
			printf("\r\n the largest value is %d", c);
	}
	else
		if(b>c)
			printf("\r\n the largest value is %d", b);
		else
			printf("\r\n the largest value is %d", c);
}

