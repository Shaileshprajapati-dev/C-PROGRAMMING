#include<stdio.h>  
 void main()    
{    
      int i, num=0, rem;    
      printf("Enter a number: ");    
      scanf("%d", &i);    
  if(i!=0)    
  {    
     rem=i%10;    
     num=num*10+rem;    
     i/=10;    
  }    
  printf("Reversed Number: %d",num);     
}
