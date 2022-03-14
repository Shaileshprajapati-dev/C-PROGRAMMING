#include<stdio.h>
void main()
{
    int odd,num,rem;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(num>=0)
    {
        rem = num%10;
        num= num/10;
      odd=rem%2;
      
      if(odd!=0)
     }
    	
		printf("\n Odd Digit number is = %d", odd);
	
}
