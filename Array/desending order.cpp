//array decending order

#include<stdio.h>
int main()
{
	int a[100],n,i,j,temp;
	printf("Enter the number of array: ");
	scanf("%d",&n);
	printf("Enter the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;;
			}
		}
		printf("%d \n",a[i]);
	}
	return 0;
}
