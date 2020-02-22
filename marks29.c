#include<stdio.h>
void main()
 {
  float a,b,c,t,A;
  char name[30];
  printf("Name of the student: \n");
  scanf("%s", name);
  printf("Subject1:");
  scanf("%f", &a);
  printf("Subject2:");
  scanf("%f", &b);
  printf("Subject3:");
  scanf("%f", &c);
  t=a+b+c;
  A=t/3.0;
  printf("Name: %s \n", name);
  printf("Total marks:%f \n",t);
  printf("Average marks:%f \n",A);
  }
