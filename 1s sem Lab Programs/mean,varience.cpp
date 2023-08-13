//6.	Write a C program that computes the mean, variance and standard deviation of n elements in an array. 
#include<stdio.h>
#include<math.h>
main()
{
	int a[50],i,n;
	float mean,var,sd,sum=0;
	printf("Read the value of n\n");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
	scanf("%i",&a[i]);
	for(i=0;i<n;i++)
	sum=sum+a[i];
	mean=sum/n;
	sum=0;
	for(i=0;i<n;i++)
	sum=sum+pow((a[i]-mean),2);
	var=sum/n;
	sd=sqrt(var);
	printf("Mean=%f\n",mean);
	printf("Varience = %f\n",var);
	printf("Standard Deviation=%f\n",sd);
}
