/*

* * * *
* * *
* *
*

*/
#include<stdio.h>
void main()
{
	int i,j,n=4;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf(" * ");
		}
		printf("\n");
		n=n-1; // updation 
	}
}
