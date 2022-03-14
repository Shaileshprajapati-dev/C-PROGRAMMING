#include<stdio.h>
void main()
{
	int i,j;
	printf("enter the value of i :");
	scanf("%d%d",&i,&j);
	i=i%2==0? printf("\nvalue is even ") : printf("\nvalue is odd");
	j=j%3==1? printf("\nvalue is odd") : printf("\nvalue is even ");
	
}
