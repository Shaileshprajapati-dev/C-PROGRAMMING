//c programming S
//wap to input your name and print all chhar of your name in seprate lines
#include<stdio.h>
void main()
{
	char name[50];
	int i;
	printf("enter your name:");
	gets(name);
	i=0;
	while(name[i]!='\0')
	{
		printf("%c\n",name[i]);
		i++;
	}
}
