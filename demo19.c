//wap to input m for male and f for famale and print the gender
//like male or famale
#include<stdio.h>
void main()
{
	char gen;
	printf("enter m - for male and f - for female ");
	gen=getche();
	gen=='m'?printf("\nyou are male"):(gen=='f'?
	printf("\nyou are female"):printf("\nyou are invalid character"));
}
