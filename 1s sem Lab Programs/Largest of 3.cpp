//6.	Write a C program to find the largest of any 3 given integers.
#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the three digits:\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	printf("%d is largest",a);
	else if(b>a && b>c)
	printf("%d is largest\n",b);
	else
	printf("%d is largest\n",c);
	
}
