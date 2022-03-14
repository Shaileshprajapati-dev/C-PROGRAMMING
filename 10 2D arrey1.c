// wap to store 5 subject marks of 3 student and find sum of marks of only secount student 
#include<stdio.h>
void main()
{
	int marks[3][5],row,col,sum=0;
	for(row=0;row<=2;row++)
	{
		printf("enter 5 subject of student : %d",row+1);
		for(col=0;col<=4;col++)
		scanf("%d",&marks[row][col]);
	}
	for(col=0;col<=4;col++)
	{
		sum=sum+marks[1][col];
	}
	printf("total marks of secound student is : %d",sum);
}
