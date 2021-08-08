//C program to check whether a number is Strong number or not.
#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,i;
int fact,sum=0,temp;
clrscr();
printf("Enter the number: ");
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
fact=1;
for(i=1;i<=r;i++)
{
fact=fact*i;
}
n=n/10;
sum=sum+fact;
}


//printf("The fact is = %d",sum);
if(temp==sum)
{
printf("number is strong");
}
else
printf("not storng number");


getch();
}

