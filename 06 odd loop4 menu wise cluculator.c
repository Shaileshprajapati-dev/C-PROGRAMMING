#include<stdio.h>
void main()
{
	int choice;
	int exit;
	int no1,no2;
	 
	 do
	 {
	   	printf("---MENU WISE CALCULATOR---\n");
	 	 printf("1. for addition press 1\n");
         printf("2. for subtractoin press 2\n");
	     printf("3. for multiply press 3\n");
	     printf("4. for division press 4\n");
	     printf("press option:");
	     scanf("%d",&choice);
	     
	     switch(choice)
		 {
	     	default:
	     		printf("Invalid Option \n");
	     		break;
	     		
	     		case 1:
	     			system("cls");
	     			printf("---perform addition--- \n");
	     			printf("enter the number 1:");
	     			scanf("%d",&no1);
	     			printf("enter the number 2:");
	     			scanf("%d",&no2);
	     			printf("the result= %d:",(no1+no2));
	     			break;
	     			
	     		case 2:
	     			system("cls");
	     			printf("---perform subtraction--- \n");
	     			printf("enter the number 1:");
	     			scanf("%d",&no1);
	     			printf("enter the number 2:");
	     			scanf("%d",&no2);
	     			printf("the result= %d:",(no1-no2));
	     			break;
	     			
	     		case 3:
	     			system("cls");
	     			printf("---perform multiply--- \n");
	     			printf("enter the number 1:");
	     			scanf("%d",&no1);
	     			printf("enter the number 2:");
	     			scanf("%d",&no2);
	     			printf("the result= %d:",(no1*no2));
	     			break;
	     			
	     		case 4:
	     			system("cls");
	     			printf("---perform division--- \n");
	     			printf("enter the number 1:");
	     			scanf("%d",&no1);
	     			printf("enter the number 2:");
	     			scanf("%d",&no2);
	     			printf("the result= %d:",(no1/no2));
	     			break;
		 }
		 
		 printf("\n Do you exit [1|0]:");
		 scanf("%d",&exit);
		 system("cls");
	 } while(exit==0);
}
