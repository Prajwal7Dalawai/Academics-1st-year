//4.	Write a C program to search an element from a list of 'n' array elements using binary search technique.
#include<stdio.h>
main()
{
	int i,n,a[20],low,high,mid,ele;
	printf("Enter the number of elements in an array.\n");
	scanf("%d",&n);
	printf("Enter the elements of the array.\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the element you want to search:\n");
	scanf("%d",&ele);
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==ele)
		{
			printf("Element %d is located at %d position.\n",ele,mid+1);
   			break;
		}
		else
		if(ele<a[mid])
		high=mid-1;
		else
		low=mid+1;
		
	}
	
}
