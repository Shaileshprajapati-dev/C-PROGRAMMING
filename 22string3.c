// wap to count total word present in string
#include<stdio.h>
void main()
{
		char name[100];
	int i,count=0;
	printf("enter your name :");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
	if(name[i]=='' && name[i=1]!='')	
	count++;
	}
	printf("total word is %d\n  ",count+1);

}
