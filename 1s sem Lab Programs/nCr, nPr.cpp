//10.	Write a C program to read the values of n and r, and call a user defined function factorial () to compute factorial of a number and calculate n C r and n P r.
#include<stdio.h>
int factorial(int num)
{
	int prod=1,i;
	for(i=1;i<=num;i++)
	prod=prod*i;
	return prod;
}
main()
{
	int C,P,r,n;
	printf("Enter the values of n and r respectively:\n");
	scanf("%f %f",&n,&r);
	C=factorial(n)/(factorial(n-r)*factorial(r));
	P=factorial(n)/factorial(n-r);
	printf("nCR=%d\nnPr=%d",C,P);
}
