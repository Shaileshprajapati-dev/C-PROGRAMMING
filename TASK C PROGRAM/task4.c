#include <stdio.h>

int main()
 {
	int x, i;
	printf("Input an integer: ");
	scanf("%d", &x);
	printf("List of square of each one of the even values from 1 to a %d :\n",x);
	for(i = 4; i <= x; i++) 
		if((i%4) == 0) 
			printf("%d^4 = %d\n", i, i*i);
	
}

