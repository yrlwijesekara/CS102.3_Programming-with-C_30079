#include<stdio.h>
int main()
{
    int number;
    int total=0;
    int reminder;
    printf("Enter number:");
    scanf("%d",&number);
    while (number!=0){
        reminder=number%10;
        total+=reminder;
        number=number/10;
    }
    printf("the output is %d",total);
}

