// wap to input 10 element of arry and given value is how many times present in arrey 
#include<stdio.h>
void main()
{
	int a[10],i,count=0,val;
	printf(" enter the 10 number :");
	for(i=0;i<=9;i++)
{
	scanf("%d",&a[i]);
}
     printf("\n enter the value search in arrey : \n");
     scanf("%d",&val);
	 for(i=0;i<=9;i++)
	 {
	 	if(a[i]==val)
	 	{
	 		 printf("input value present in arrey \n");
	 		count++;
		 }
	 }
	
	 
	 printf("given value %d time present in arrey ",count);
	 	 }
