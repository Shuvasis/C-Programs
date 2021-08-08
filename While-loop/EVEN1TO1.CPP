//C program to print all even numbers between 1 to 100. - using while loop
#include<stdio.h>
#include<conio.h>
void main()
{
int n=1;
clrscr();
printf("Print all even number 1 to 100\n");

while(n<=100)
{
if(n%2==0)
{
printf("%d ",n);
}
n++;
}
getch();
}