//Copy array

#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
int a[30],b[30];
clrscr();
printf("Enter the number upto 30: ");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("The copy element is : ");
for(i=0;i<n;i++)
{
b[i]=a[i];
printf("%d ",b[i]);
}
getch();
}
