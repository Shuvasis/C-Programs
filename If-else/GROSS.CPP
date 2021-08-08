//C program to input basic salary of an employee and calculate its Gross salary
#include<stdio.h>
#include<conio.h>
void main()
{

int salary,gross,hra,da;
clrscr();
printf("Enter the basic salary: ");;
scanf("%d",&salary);

if(salary<=10000)
{
da=(salary*20)/100;
hra=(salary*80)/100;
gross=salary+da+hra;

}

else if(salary<=20000)
{
da=(salary*25)/100;
hra=(salary*90)/100;
gross=salary+da+hra;
}
else if(salary>20000);
{
da=(salary*30)/100;
hra=(salary*95)/100;
gross=salary+da+hra;

}
printf("The gross salary is: %d",gross);
getch();
}
