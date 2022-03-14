// wap to read 5 value form user and count total positive and nagetive number present 
#include<stdio.h>
void main()
{
	int i,n,p=0,neg=0;
	printf("enter any 5 number :");
	for(i=1;i<=5;i++)
{
	scanf("%d",&n); //-10,
	if(n>0)
	p=p+1; //1
	else if(n%2==1)
	neg++; //1,2,3
}
    printf("positive =%d, negtive=%d",p,neg);
}
