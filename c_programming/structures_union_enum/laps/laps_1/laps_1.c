/*
 * main.c
 *
 *  Created on: Feb 10, 2026
 *      Author: kirollos
 */
#include <stdio.h>
struct scomplex
{
	double m_r;
	double m_i;
};
struct scomplex readcomplex(char name[])
{
	struct scomplex c;
	printf("enter %s complex value (Ex: 5,-3):",name);
	fflush(stdin); fflush(stdout);
	scanf("%lf, %lf",&c.m_r,&c.m_i);
	return c;
}
struct scomplex addcomplex(struct scomplex a,struct scomplex b)
{
	struct scomplex c;
	c.m_r=a.m_r+b.m_r;
	c.m_i=a.m_i+b.m_i;
	return c;
}
void printcomplex(char name[],struct scomplex c)
{
	printf("%s=(%lf)+j(%lf)\r\n",name,c.m_r,c.m_i);
}
void main()
{
	struct scomplex x,y,z;
	x=readcomplex("x");
	y=readcomplex("y");
	z=addcomplex(x,y);
	printcomplex("z",z);
}
