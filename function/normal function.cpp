//function programm

#include<stdio.h>
int name(); //function declaration without aggrement
int sum(int, int);
int main()
{
	int a,b;
	printf("Welcome\t");
	name(); //call function
	printf("\nenter two number: ");
	scanf("%d%d",&a,&b);
	sum(a,b); //call function
	
	return 0;
	
}

int name()
{
	printf("Shuvasis");
}
int sum(int x, int y)
{
	printf("%d",x+y);
}
