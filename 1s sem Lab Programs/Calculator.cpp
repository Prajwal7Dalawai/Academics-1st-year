//1.	Write a C program to implement a simple calculator involving +, -, *, and  / operations. Use 'switch' to implement this.
// [NOTE: The program must report errors for division by zero and illegal operator]
#include<stdio.h>
main()
{
	int a,b;
	char p;	
	printf("1.Press 'A' or 'a' for addition.\n2.Press 's' for'S' for Subtraction.\n3.Press 'm' or 'M' for multiplication.\n4.Press 'd' for 'D' division.\n");
	scanf("%c",&p);
	printf("Enter the two numbers to perform operation.\n");
	scanf("%d %d",&a,&b);
    switch(p)
    {
    	case 'a':
    	case 'A':printf("%d",a+b); break;
		case 's':
		case 'S':printf("%d",a-b); break;
		case 'm':
		case 'M':printf("%d",a*b); break;
		case 'd':
		case 'D': if(b==0)
		          printf("Division not possible\n");
				  else
				  printf("%d",a/b); break;
	 }
	 	
}
