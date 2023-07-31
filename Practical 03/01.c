#include<stdio.h>
int main()
{
    int no1,no2, highest;
    printf("Enter two numbers");
    scanf("%d\n %d",&no1,&no2);
    if(no1>no2)
        highest=no1;
    else
        highest=no2;
    printf("the highest number is %d",highest);
}
