// wap to input a number 1234 :four three two one
#include<stdio.h>
void main()
{
	int num,rem;
	printf("enter the number:");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		switch(rem)
		{
			case 0:
				printf("zero\n");
			    break;
	    	case 1:
				printf("one\n");
			    break;
			case 2:
				printf("two\n");
			    break;
			case 3:
				printf("three\n");
			    break;
			case 4:
				printf("four\n");
			    break;
			case 5:
				printf("five\n");
			    break;
			case 6:
				printf("six\n");
			    break;
			case 7:
				printf("sevan\n");
			    break;
			case 8:
				printf("eight\n");
			    break;
			case 9:
				printf("nine\n");
			    break;
			case 10:
				printf("ten\n");
			    break;
		}
		num=num/10;
	}
}
