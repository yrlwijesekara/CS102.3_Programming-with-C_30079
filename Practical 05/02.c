#include<stdio.h>
int main()
{
   int marks;
   int i,sum=0;
   float avg;

   for(i=0;i<10;i++)
    printf("Enter Marks;");
   scanf("%d",&marks);
   sum+=marks;
}
printf("sum %d\n",sum);

avg=Sum/10;
if(avg>50){
    printf("pass");
}else{
printf("fail");
}
