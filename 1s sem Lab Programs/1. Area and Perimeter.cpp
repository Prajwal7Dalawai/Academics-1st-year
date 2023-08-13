//1.	Write a C program to find and print the area and perimeter of a circle whose radius is given.
#include<stdio.h>
main()
{
	float area,per,r;
	printf("Enter the radius of the circle:\n");
	scanf("%f",&r);
	area=3.142*r*r;
	per=3.142*2*r;
	printf("Perimeter of the circle=%.2f\n",per);
	printf("Area of the circle=%.2f\n",area);
}
