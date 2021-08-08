//delete array

#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,n,p;
clrscr();
printf("Enter the array elements:\n");
scanf("%d",&n);
printf("Enter the array element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the position delete: ");
scanf("%d",&p);
n--;
for(i=p;i<=n;i++)
{
a[i-1]=a[i];
}
for(i=0;i<=n;i++)
{
printf("%d ",a[i]);
}
getch();
}