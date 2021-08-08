//alphabet is vowel or consonant using switch case.

#include<stdio.h>
#include<conio.h>
void main()
{
char c;
int a;
clrscr();
printf("Enter the staring alphabate\n");
scanf("%c",&c);
a=("%d",c);
while(a<=122)
{
printf("%c ",a);
a++;
}
getch();
}