#include<stdio.h>
int main()
{
   int no1,no2,no3,larger,small;
   printf("Enter 3 numbers");
   scanf("%d%d%d",&no1,&no2,&no3);
   larger=no1;
   if(no2>larger)
    larger=no2;
   if(no3>larger)
    larger=no3;
   printf("larger Number is %d\n",larger);
   small=no1;
   if(no2>small)
    small=no2;
   if(no3<small)
    small=no3;
   printf("larger number is %d\n",larger);
   small=no1;
   if (no2<small)
    small=no2;
    if(no3<small)
        small=no3;
        printf("small number is %d",small);
    }


