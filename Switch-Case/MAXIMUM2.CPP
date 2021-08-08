//find maximum between two numbers using switch case.

#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2;
printf("Please Enter Two Number\n");
scanf("%d%d",&n1,&n2);

switch(n1>n2)
{
case 0:
printf("n2 is maximum %d",n2);
break;
case 1:
printf("n1 is maximum %d",n1);
break;
}
getch();
}