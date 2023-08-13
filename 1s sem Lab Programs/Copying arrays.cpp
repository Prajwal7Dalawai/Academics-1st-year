//7.	Write a C program to find copy one array into another array and print both arrays.
#include<stdio.h>
/*main()
{
	int a[10],b[20],i,n;
	printf("Enter the no. of elements in first and second array:\n ");
	scanf("%d",&n);
	printf("Enter the elements in first array:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",a[i]);
}

	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	printf("Elements is first array:-\n" );
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	printf("Elements in second array after copying;\n");
	for(i=0;i<n;i++)
	printf("%f",b[i]);
}*/
#include <stdio.h>

main() {
    int arr1[10], arr2[10], i, n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Copying the contents of arr1 to arr2
    for (i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    printf("\nThe elements of the first array are: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\n\nThe elements of the second array are: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
}

