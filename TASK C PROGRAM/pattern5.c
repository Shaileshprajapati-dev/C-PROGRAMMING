/*
   *
  * *
 * * *
* * * * 
 */
#include<stdio.h>
void main()
{
	int i,j,sp,n=5;
	for(i=1;i<=5;i++)
	{
		for(sp=1;sp<=6-i;sp++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
