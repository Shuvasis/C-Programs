//C program to input electricity unit charges and calculate total electricity bill
#include<stdio.h>
#include<conio.h>
void main()
{
int unit;
float bill;
clrscr();
printf("Enter the unit\n");
scanf("%d",&unit);

if(unit<=50)
{
bill=unit*0.50;
}
else if(unit>50 && unit<=100)
{
bill=unit*0.75;
}
else if(unit>100 && unit<=200)
{
bill=unit*1.20;
}
else if(unit>250)
{
bill=unit*1.50;
}

printf("The Total Eletricity bill is: %.2f",bill);

getch();
}
