//2.	Write a C program to check whether a given number is a prime number or not.
#include<stdio.h>
#include<math.h>
main()
{
	int prime=1,i,n,rem;
	printf("Enter the number to be checked.\n");
	scanf("%d",&n);
	for(i=2;i<=sqrt(n);i++)
	{
		rem=n%i;
		if(rem==0)
		{
			prime=0;
			break;
		}
	}
	if(prime==1)
	printf("Number is prime number.\n");
	else
	printf("Not a prime number.\n");
	
}
