#include <stdio.h>  
   
int main()  
{  
    int arr[100];
	int i,j,n;
	printf("Enter the n number of elements: ");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	 } 
      
    printf("Duplicate elements in given array: \n");  
    
    for(i = 0; i < n; i++) {  
        for(j = i + 1; j < n; j++) {  
            if(arr[i] == arr[j])  
                printf("%d\n", arr[j]);
        }  
    }  
    
    return 0;  
}  
