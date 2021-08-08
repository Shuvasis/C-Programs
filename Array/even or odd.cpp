//sort even or odd number separate array using array

#include<stdio.h>
int main()
{
	int a[100],n,i,e,o, even[100], odd[100];
	printf("Enter the array size: ");
	scanf("%d",&n);
	printf("Enter the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
			even[e++]=a[i];
		
		else
			odd[o++]=a[i];
		
	}
	printf("\nArray even element is: ");
	for(i=0;i<e;i++)
	{
		printf("%d\t",even[i]);
	}
		

	printf("\nArray odd element is: ");
	for(i=0;i<o;i++)
	{
		printf("%d\t",odd[i]);
	}
		
		
	return 0;
}
