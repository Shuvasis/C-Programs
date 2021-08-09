//amstrong or not using function

#include<stdio.h>
#include<math.h>
int amstrong(int);
int main()

{
	int n,a;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	amstrong(a);
	return 0;
}

int amstrong(int a)
{
	int temp,c=0,r,sum=0,store;
	temp=a;
	store=a;
	while(temp!=0)
	{
		temp=temp/10;
		c++;
		
	}
	while(a!=0)
	{
		r=a%10;
		sum=sum+pow(r,c);
		a=a/10;
	}
	
	if(store==sum)
	{
		printf("Amstrong number");
	}
	else
	{
		printf("not amstrong number");
	}
}
