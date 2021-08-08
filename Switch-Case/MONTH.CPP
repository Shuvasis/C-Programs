//C program print total number of days in a month using switch case.
#include<stdio.h>
#include<conio.h>
void main()
{

int month;
clrscr();
printf("Enter 1 for Jan: ");
printf("\nEnter 2 for feb: ");
printf("\nEnter 3 for mar: ");
printf("\nEnter 4 for april: ");
printf("\nEnter 5 for may: ");
printf("\nEnter 6 for jun: ");
printf("\nEnter 7 for jully: ");
printf("\nEnter 8 for aug: ");
printf("\nEnter 9 for sep: ");
printf("\nEnter 10 for oct: ");
printf("\nEnter 11 for nov: ");
printf("\nEnter 12 for dec: \n");
printf("Please Choise options: ");
scanf("%d",&month);

switch(month)
{
case 1:
printf("31 days");
break;
case 2:
printf("28 days");
break;
case 3:
printf("31 days");
break;
case 4:
printf("30 days");
break;
case 5:
printf("31 days");
break;
case 6:
printf("30 days");
break;
case 7:
printf("31 days");
break;
case 8:
printf("31 days");
break;
case 9:
printf("30 days");
break;
case 10:
printf("31 days");
break;
case 11:
printf("30 days");
break;
case 12:
printf("31 days");
break;
default:
printf("Please choise again");
break;
}
getch();
}
