// wap to count total occurent of a in youe name
#include<stdio.h>
void main()
{
	char name[100];
	int i,count=0;
	printf("enter your name :");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
	if(name[i]=='a'|| name[i]=='A')	
	count++;
	}
	printf("total %d time 'a'is ",count);
}
