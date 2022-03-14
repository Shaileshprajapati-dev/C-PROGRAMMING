// wap to convert to ruppe to paisa 
#include<stdio.h>
void convert()   /// no return type with no argument 
{
	int p;
	float r;
	printf("enter currency in ruppe :");
	scanf("%f",&r);
	p=r*100;
	printf(" paisa :%d",p);
}
void convert1( float r)
{
	printf("paisa :%f",r*100);
}
int convert2()
{
	float r;
	int p;
	printf(" enter rupee : ");
	scanf("%f",&r);
	p=r*100;
	return p;
}
void main()
{
	int a;
	/*convert1(4);
	a=convert2();
	printf("\npaisa : %d",a); */
	convert2();
	printf(" paisa :%d",convert2());
}
