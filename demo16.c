//wap to input total fee of your greuation and there is 10% discount if
//fee is greater than 20000 and there is 20% discount if fee is less than 
//20000. calculate the total fee ofter discount
#include<stdio.h>
void main()
{
	int fee,disper;
	printf("please enter your actual fee of graduation :");
	scanf("%d",&fee); //fee=?, disper=?
	disper=fee>20000?10:(fee==20000?15:20);
	printf("discounted fee is : %d",fee-((fee*disper)/100));
}

