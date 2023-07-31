#include<stdio.h>
int main()
{
   float nsalary,bsalary,inc;
   char ename[20];
   printf("Enter employee name:");
   scanf("%s",&ename);
   printf("Enter basic salary:");
   scanf("%f",&bsalary);
   if(bsalary>=10000)
    inc=bsalary*15/100;
   else if(bsalary>=5000)
    inc=bsalary*10/100;
   else
    inc=bsalary*5/100;
   nsalary=bsalary+inc;
   printf("The new salary is %.2f",nsalary);
    }
