#include<stdio.h>
int main()
{
   float radi,dia,cir,area;
   printf("Enter radi");
   scanf("%f",&radi);
   dia=radi*2;
   cir=(3.14159)*dia;
   area=3.14159*(radi*radi);
   printf("The diameter is %2f\n",dia);
   printf("The circumference is %2f\n",cir);
   printf("The area is %2f",area);

    }
