// wap in c show if else together 
#include<stdio.h>
void main()
{
	int i=0;
	step1:
		if(i==11)
		{
			goto exit;
		}
		printf("hello %d \n",i);
		i++;
		goto step1;
		
		exit:;
}
