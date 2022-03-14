#include<stdio.h>
void main()
{
	//1---> true ---> rem -->1
	//0---> false ---> rem -->0
	int x;
	printf("enter the number ");
	scanf("%d",&x);
	
	if(x%2)
	{
		printf("odd");
	}
	else{
		printf("even :");
	}
}
