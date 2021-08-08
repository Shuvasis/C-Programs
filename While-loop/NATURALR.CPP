#include<stdio.h>
#include<conio.h>
void main()
{
int n,c=1;
clrscr();
printf("Enter the N number\n");
scanf("%d",&n);

while(c<=n)
{
printf("%d ",n);
n--;
}
getch();
}