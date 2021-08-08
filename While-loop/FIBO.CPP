//C program to print Fibonacci series up to n terms
#include<stdio.h>
#include<conio.h>
void main()
{

int f1=0,f2=1,n,i,fibo;
clrscr();
printf("Enter the n number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d ",f1);
fibo=f1+f2;
f1=f2;
f2=fibo;
}
getch();
}