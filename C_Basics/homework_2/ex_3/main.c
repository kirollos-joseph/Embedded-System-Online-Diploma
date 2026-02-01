/*
 * main.c
 *
 *  Created on: Feb 1, 2026
 *      Author: kirollos
 */
#include <stdio.h>
int main(){
	float a,b,c;
	printf("\r\n enter three numbers:");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f", &a ,&b ,&c );
	if(a>b)
	{
		if(a>c)
			printf("\r\n the largest value is %f", a);
		else
			printf("\r\n the largest value is %f", c);
	}
	else
		if(b>c)
			printf("\r\n the largest value is %f", b);
		else
			printf("\r\n the largest value is %f", c);
	return 0;
}

