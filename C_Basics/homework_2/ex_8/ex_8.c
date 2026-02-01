/*
 * main.c
 *
 *  Created on: Feb 1, 2026
 *      Author: kirollos
 */
#include <stdio.h>
int main()
{
	float a,b,value;
	char c;
	printf("Enter operator either + or - or * or divide:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);
	printf("enter two operands");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&a,&b);
	switch(c)
	{
	case '+' :
		value=a+b;
		printf("%f %c %f =%f",a,c,b,value);
		break;
	case '-' :
		value=a-b;
		printf("%f %c %f =%f",a,c,b,value);
		break;
	case '*' :
		value=a*b;
		printf("%f %c %f =%f",a,c,b,value);
		break;
	case '/' :
		if(b==0){
			printf("cannot divide by zero");}
		else{
			value=a/b;
			printf("%f %c %f =%f",a,c,b,value);
		}
		break;
	default:
		printf("Invalid operator entered");
	}
	return 0;
}



