//3.	Write a C program, which calculates the roots of a Quadratic Equation, given the values of a, b, and c, and print the type of the roots and roots of the equation.
#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c;
	float r1,r2,repart,impart,disc;
	printf("Enter the co-efficients of quadratic equations:\n");
	scanf("%d %d %d",&a,&b,&c);
	disc=b*b-4*a*c;
	if(disc==0)
	{
		printf("Roots are real and equal.\n");
		r1=b/2*a;
		printf("The roots is %f",r1);
	}
	else if(disc>0)
	{
		printf("Roots are real and different.\n");
		r1=(-b+sqrt(disc))/(2*a);
		r2=(-b-sqrt(disc))/(2*a);
		printf("Roots are %f and %f",r1,r2);
	}
	else
	{
		printf("Roots are imaginary,\n");
		repart=-b/(2*a);
		impart=sqrt(-1.0*disc)/(2*a);
		printf("The roots are %f+i%f and %f-i%f",repart,impart,repart,impart);
		
	}
			
}
