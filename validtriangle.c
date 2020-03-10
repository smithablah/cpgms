#include<stdio.h>
void main()
 { 
  int a,b,c;
  printf("Enter side a= \n");
  scanf("%d",&a);
  printf("Enter side b= \n");
  scanf("%d",&b);
  printf("Enter side c= \n");
  scanf("%d",&c);
  if ((a+b>c)||(b+c>a)||(a+c>b))
  printf("Triangle is valid. \n");
  else
  printf("Triangle is invalid. \n");
 }
