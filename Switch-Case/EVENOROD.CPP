//even or odd using switch case

#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter the number \n");
scanf("%d",&n);

switch(n%2==0)
{
case 0:
printf("Number is %d odd",n);
break;
case 1:
printf("Number is %d even",n);
break;
}
getch();
}