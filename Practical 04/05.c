 #include<stdio.h>
 int main()
 { int x;
 printf("Enter month number:\n");
printf("1. January\n");
 printf("2. February\n");
printf("3. March\n");
 printf("4. April\n");
 printf("5. May\n");
 printf("6. June\n");
printf("7. July\n");
 printf("8. Aughust\n");
printf("9. September\n");
 printf("10. october\n");
printf("11. November\n");
printf("12. December\n");
scanf("%d",&x);
switch(x)
{
case 1:printf("31 days");break;
case 2:printf("28 days");break;
 case 3:printf("31 days");break;
 case 4:printf("30 days");break;
case 5:printf("31 days");break;
 case 6:printf("30 days");break;
 case 7:printf("31 days");break;
 case 8:printf("31 days");break;
 case 9:printf("30 days");break;
 case 10:printf("31 days");break;
 case 11:printf("30 days");break;
                      case 12:printf("31 days");break;
}
 }

