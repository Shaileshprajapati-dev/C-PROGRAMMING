//@email
#include<stdio.h>
void main()
{
	char email[100];
	int i,dot=0,at=0;
	printf("enter your email:");
	gets(email);
	for(i=0;email[i]!='\0';i++)
	{
		if(email[i]=='@')
		at=at+1;
		else if(email[i]=='.')
		dot=dot+1;
		
	}
	if(dot>=1 && at>=1)
	printf("this is a valid email id");
	else
	printf("email id shoud contain atleast one @ and .");
//	printf("total %d @ and %d dot are pre:",at ,dot);
}
