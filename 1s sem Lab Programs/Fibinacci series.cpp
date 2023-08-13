//5.	Write a C program to print the 1st 'n' elements in a Fibonacci series.
#include<stdio.h>
main()
{
	int f1=0,f2=1,f3,n,i;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	if(n==1)
	printf("0,1\n");
	else if(n==0)
	printf("0\n");
	else
	{
		printf("0 1");
	for(i=2;i<=n;i++)
	{
		f3=f1+f2;
		printf(" %i",f3);
		f1=f2;
		f2=f3;
	}
}
}
