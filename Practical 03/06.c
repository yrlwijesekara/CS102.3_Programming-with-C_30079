 #include<stdio.h>
 int main()
{
 int year,bsalary,msales;
 float grossmonthly;
char city;
printf("Enter work years:");
 scanf("%d",&year);
printf("Basic salary:");
 scanf("%d",&bsalary);
printf("Enter monthly sales:");
scanf("%d",&msales);
if(year>=5)
grossmonthly=bsalary+bsalary*10/100;
Else
 grossmonthly=bsalary;
if(msales>=50000)
grossmonthly+=msales*15/100;
else if(msales>=25000)
grossmonthly+=msales*12/100;
else
grossmonthly+=msales*10/100;
printf("Gross monthly remuneration is %.2f",grossmonthly);



