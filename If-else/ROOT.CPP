//C program to find all roots of a quadratic equation.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,disc,r1,r2,real,img;
clrscr();
printf("Enter cofficients a,b and c:\n");
scanf("%f%f%f",&a,&b,&c);
disc=b*b-4*a*c;

if(disc>0)
{
r1=(-b+sqrt(disc))/(2*a);
r2=(-b-sqrt(disc))/(2*a);
printf("root1= %.2f and root2 = %.2f",r1,r2);
}

else if(disc==0)
{
r1= r2= -b/(2*a);
printf("root1 = root2 = %.2f:",r1);
}
else
{
real=-b/(2*a);
img= sqrt(-disc)/(2*a);
printf("root1= %.2f + %.2fi and root2= %.2f - %.2fi",real,img,real,img);
}
getch();
}