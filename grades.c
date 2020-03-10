#include<stdio.h>
void main()
 {
  int a,b,c,d,e,sum,perc;
  printf("Enter marks of subject1: \n");
  scanf("%d",&a);
  printf("Enter marks of subject2: \n");
  scanf("%d",&b);
  printf("Enter marks of subject3: \n");
  scanf("%d",&c);
  printf("Enter marks of subject4: \n");
  scanf("%d",&d);
  printf("Enter marks of subject5: \n");
  scanf("%d",&e);
  sum=(a+b+c+d+e);
  perc=sum*100/500;
  if(perc>=90)
  printf("The grade is A+ \n");
  else if(perc>=80 && perc<=89)
  printf("The grade is A \n");
  else if(perc>=70 && perc<=79)
  printf("The grade is B \n");
  else if(perc>=60 && perc<=69)
  printf("The grade is C \n");
  else if(perc>=50 && perc<=59)
  printf("The grade is D \n");
  else
  printf("You've been to promoted to write re-exam!! \n");
 }
  
