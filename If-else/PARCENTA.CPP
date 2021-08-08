//C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade
#include<stdio.h>
#include<conio.h>
void main()
{

int n,r;
clrscr();
printf("Enter the number\n");
scanf("%d",&n);
r= n/7;
if(90<=r)
{
printf("Gread A");
}
else if(80<=r)
{
printf("Gread B");
}
else if(70<=r)
{
printf("Gread C");
}
else if(60<=r)
{
printf("Gread D");
}
else if(40<=r)
{
printf("Gread E");
}
else
{
printf("Gread F");
}
getch();
}
