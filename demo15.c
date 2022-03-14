//wap to check largen number witten two number by using ternary 
//operator 
// two number -> condition -> n1>n2:" first is greater"
#include<stdio.h>
void main()
{
	int n1,n2;
	printf("please enter 2 number :");
	scanf("%d%d",&n1,&n2);
	n2<n1? printf("first value is greater ") :printf("second value is greter")    ;
}
