#include<stdio.h>
int main()
 {
int radi,choice;
 float cir,area,volume;
 printf("select you want\n");
printf("1 .Circumference of a circle\n");
printf("2 .Area of a circle\n");
 printf("3 .volume of sphere\n");
 scanf("%d",&choice);
switch (choice)
{
 case 1:printf("Enter radius");
scanf("%d",&radi);
cir=2*3.145*radi;
 printf("The circumference is %.2f",cir);break;
case 2:printf("Enter radius");
scanf("%d",&radi);
area=3.145*(radi*2);
printf("The area is %.2f",area);
 case 3:printf("Enter radius");
scanf("%d",&radi);
 volume=4/3*3.145*(radi*radi*radi);
 printf("The volume of sphere is %.2f",volume);
}
 }
