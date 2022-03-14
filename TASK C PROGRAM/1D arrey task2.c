// wap to find greatest number within 10 element of arrey 
#include<stdio.h>
void main()
{
	int arr[10],i,g=0;
	printf("enter the number  :");
	for(i=0;i<=9;i++) //0
	{
		scanf("%d",&arr[i]); //2  6   7  8 
		if (g<arr[i])  // 2>0 ,6>2,7>
		{
			 g= arr[i]; //g=2 g=6
		}	
	}
	printf("greatest number : %d",g);
}
