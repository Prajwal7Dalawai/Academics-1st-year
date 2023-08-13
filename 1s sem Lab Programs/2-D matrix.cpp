//7.	Write a C program to read a matrix of order m x n, find whether it is a square matrix or not.
// If it is not print an error message and go back and read the correct order.
//  Once it is a square matrix find the sum of all elements of secondary diagonal.
#include<stdio.h>
main()
{
	int i,j,m,n,sum=0,a[10][10];
	read:
	{
	printf("Enter the number of rows and columns of 2-D matrix:\n");
	scanf("%f %f",&m,&n);
    }
    if(m!=n)
    goto read;
    else
    printf("It is a square matrix.\n");
    printf("Enter the %d elements of the matrix\n",m*n);
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	scanf("%d",a[i][j]);
	}
	for(i=2;i<=n;i++)
	sum=sum+a[i][i];
	printf("The sum is %d\n",sum);
}
