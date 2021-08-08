//C program to calculate profit or loss.
#include<stdio.h>
#include<conio.h>
void main()
{
int profit=0,loss=0, sell, cost;
clrscr();
printf("Enter selling price: ");
scanf("%d",&sell);
printf("Enter Cost price: ");
scanf("%d",&cost);
profit= sell-cost;
loss= cost-sell;
printf("Your Profit is: %d\n",profit);
printf("Your loss is: %d",loss);
getch();
}