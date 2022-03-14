// wap to find a number is even or odd byb using switch
#include<stdio.h>
void main()
{
	int num;
	printf("enter the number : ");
	scanf("%d",&num);
	switch(num%2)
	{
	case 0:
	    printf("even");
		break;
    case 1:
	    printf("odd");
		break;	
	}
}
