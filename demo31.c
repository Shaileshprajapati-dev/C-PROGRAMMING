// wap to input a character and check 
#include<stdio.h>
void main()
{
	char alpha;
	printf("enter a character :");
	alpha=getche();
	if((alpha>='a' && alpha<='z') || (alpha>='A'&& alpha<='Z'))
	{
		if(alpha=='a' || alpha=='e' || alpha=='i' ||alpha=='o' ||alpha=='u'||alpha=='A'||alpha=='E'||alpha=='I'||alpha=='O'||alpha=='U')
		{
			printf("chrecter is a value ");
		}
		else
		{
		printf("character is a consonant");
	}
	}
	else
	{
		printf("character is a not alphabet");
	}
} 
