// wpa to input your gender in(m/f) of 10 student and count how many males / famels 
#include<stdio.h>
void main ()
{
	int i,m=0,f=0;
	char gen;
	for(i=1;i<=10;i++)
	{
		printf("plaase enter (m/f):");
		scanf("%c",gen);
		fflush(stdin);
		if(gen=='m')
		m=m+1;
		else if(gen=='f')
		f=f+1;
	}
}

