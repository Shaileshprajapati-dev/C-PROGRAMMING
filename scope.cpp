#include<stdio.h>
#define add(x,y)\printf("subtract %d",(x-y)) ;
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	printf("\n %d",(x+y));
	printf("\ncurrent time is %d:",(__TIME__));
	
}
