// wap to print male or female based on m or f
#include<stdio.h>
void main()
{
	char gen;
	printf("enter gender (m or f):");
	gen=getchar();
	switch(gen)
	{
		case 'm':
		case 'M':
			printf("yor are male");
			break;
	    case 'f':
	    case 'F':
	    	printf("you are female");
	    	break;
	    default:
	    	printf("invalid charetor ");
	}
}

