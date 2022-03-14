// wap to find area of circle by using UDF
// 3.14 redius*redius
#include<stdio.h>
void area(int redius)

{
	float area;
	area=3.14*redius*redius;
	printf("area of circle =%f",area);
}
void main()
{
	int r;
	printf("enter redius of circle :");
	scanf("%d",&r);
	area(r);
}
