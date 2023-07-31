#include<stdio.h>
int main()
 {
 int no1,no2,oper;
 float answer;
 printf("Select an operation\n");
printf("1.addition\n");
printf("2.subtraction\n");
 printf("3.multiplication\n");
printf("4.division\n");
 scanf("%d",&oper);
switch (oper)
 {
 case 1:  printf("Enter two numbers");      scanf("\n%d\n%d",&no1,&no2);
answer=no1+no2;
 printf("The addition is %f",answer);break;
case 2: printf("Enter two numbers");
 scanf("\n%d\n%d",&no1,&no2);
answer=no1-no2;
 printf("The subtraction is %f",answer);break;
 case 3: printf("Enter two numbers"); scanf("\n%d\n%d",&no1,&no2);
 answer=no1*no2;
 printf("The multiplication is %f",answer);break;
case 4: printf("Enter two numbers");
scanf("\n%d\n%d",&no1,&no2);
 answer=no1/no2;
 printf("The divide is %f",answer);break;
 }
}
