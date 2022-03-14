#include<stdio.h> 
     int fun(int n){ 
    int temp=1; 
    if(n>10){ 
        n/=10; 
        temp*=10; 
    } 
} 
void main(){ 
    int num,temp,t,z; 
    scanf("%d",&num); 
    temp=fun(num); 
    if(temp>0){ 
        t=num/temp; 
  
        printf("%d\n enter the value : ",t%10); 
         
        temp/=10; 
    } 
     
}
