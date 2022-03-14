#include<stdio.h>
void main()
{
    int num,rem,odd=0,digit;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(num>0)
    {
	
        digit= num%10;
        num= num/10;
        rem=digit%2;
      if(digit!=0);
}
		printf("\n Odd Digit number is = %d", digit);
	
}

