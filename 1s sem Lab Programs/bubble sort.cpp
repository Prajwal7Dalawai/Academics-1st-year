//5.	Write a C program to sort elements of an integer array using bubble sort technique. Print both unsorted and sorted array of elements.
#include<stdio.h>
main()
{
	int i,n,temp,j,a[10];
	printf("Enter the number of elements in an array.\n");
	scanf("%d",&n);
	printf("Enter the elements of the array.\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("The sorted elements are:-\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j] > a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
		}
	}
for(i=0;i<n;i++)
printf("%d ",a[i]);
}
