#include<stdio.h>
//dont anderstand why are same value print
void main()
{
	int x=1;
	switch(x)
	{
		x=x+1;
		case 1:
		printf("one"); break;
		case 2:
		printf("two"); break;
		default:
		printf("three");
	}
}
