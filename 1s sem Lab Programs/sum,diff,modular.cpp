/*10.	Write a C program to include two functions - add (int , int) and subtract (int, int) and main () calls these functions to print the sum and difference of 2 input numbers
 passed as parameters from main.*/
 #include<stdio.h>
 int add(int a,int b)
 {
 	int sum;
 	sum=a+b;
 	return sum;
 }
 int diff(int a, int b)
 {
 	int difff; 
	difff=a-b;
 	return difff;
 }
 main()
 {
 	int a,b,sum,dif;
 	printf("Enter 2 numbers;\n");
 	scanf("%f %f",&a,&b);
 	sum=add(a,b);
 	dif=diff(a,b);
 	printf("Sum of two numbers is %i\n",sum);
 	printf("Difference of two numbers is %i",dif);
 }
