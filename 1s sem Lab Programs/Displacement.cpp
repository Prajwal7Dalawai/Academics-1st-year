//	Write a C program to compute the displacement for the given values of initial velocity, time and acceleration.
//s = ut + 1/2 at^2 
#include<stdio.h>
main()
{
	int u,t,a;
	float s;
	printf("Enter initial velocity, time and accelaration of the body respectively:\n");
	scanf("%d %d %d",&u,&t,&a);
	s=u*t+0.5*a*t*t;
	printf("Displacement of the body is %.2f\n",s);
	
}
