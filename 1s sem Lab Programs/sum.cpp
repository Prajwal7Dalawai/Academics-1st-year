//4.	Write a C program to print the value of following sum:
//Sum = 1 + 3 + 5 + …. 
#include<stdio.h>
main()
{
	int i,sum,n;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	sum=0;
	for(i=1;i<=n;i+2)
	sum=sum+i;
	printf("The sum is = %d",sum);
}
