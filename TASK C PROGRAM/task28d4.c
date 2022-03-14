#include<stdio.h>  
void main()    
{    
     int i,num,sum=0,n;    
      printf("enter the number=");    
      scanf("%d",&i);    
            
      if(i>0)    
{    
      num=i%10;    
      sum=(sum*10)+num;    
      i=i/10;    
}    

    printf("\npalindrome number : ");    
  
    printf("\nnot palindrome number  :");  
}
