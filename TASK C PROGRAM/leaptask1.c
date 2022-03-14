#include <stdio.h>
void main()
{

int yr;
  printf ("Enter a year n");
  scanf ("%d", &yr);

  if(yr%4 == 0) 
{

 if(yr%100 == 0)
{
  if(yr%400 == 0)
    printf(" It is LEAP YEAR.");
    else
    printf(" It is NOT LEAP YEAR.");
}
 else 
 {
  printf (" It is LEAP YEAR.");
}
}
  else
     printf("nIt is NOT LEAP YEAR.");
}
