#include<stdio.h>
void main()
 {
  int a,b,c;
  printf("Enter the value of a: \n");
  scanf("%d",&a);
  printf("Enter the value of b: \n");
  scanf("%d",&b);
  printf("Enter the value of c: \n");
  scanf("%d",&c);
  if(a>b && a>c)
  printf("a is greater than b and c. \n");
  else if (b>a && b>c)
  printf("b is greater than a and c. \n");
  else
  printf("c is greater than a and b. \n");
 }
