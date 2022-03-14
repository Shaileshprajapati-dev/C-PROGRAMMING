#include<stdio.h>
struct book
{
	int price;
	char tag;
	char name[20];
} ;
void main()
{
	int a;
	printf(" size of a value  is :%d",sizeof(struct book));
}
