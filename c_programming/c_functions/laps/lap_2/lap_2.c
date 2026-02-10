/*
 * main.c
 *
 *  Created on: Feb 7, 2026
 *      Author: kirollos
 */
#include <stdio.h>
int calcmin(int values[],int n)
{
	int i,minvalue=values[0];
	for(i=0;i<n;i++)
	{
		if(values[i]<minvalue)
			minvalue =values[i];
	}
	return minvalue;

}
void main()
{
	int xvalues[10]={35,67,27,54,76,44,59,32,43,25};
	int yvalues[5]={28,71,67,83,62};
	int zvalues[13]={87,21,74,36,27,64,87,63,27,86,48,32,76};
	printf("the minimum of x, y, z values is (%d, %d, %d)\r\n",calcmin(xvalues,10),calcmin(yvalues,5),calcmin(zvalues,13));
}
