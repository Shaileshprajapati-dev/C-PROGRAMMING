#include<stdio.h>  
 void main()    
{    
    int n,sum=0,num;    
    printf("Enter a number:");    
     scanf("%d",&n);    
      if(n>0)    
{    
num=n%10;    
sum=sum+num;    
n=n/10;    
}    
printf("enter the Sum number  is=%d",sum);    
}
