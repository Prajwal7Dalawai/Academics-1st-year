/*3.	Write a C program to print the following patterns:
a					$    $    $
a  b				      $    $
a  b  c                                                        $
….                                                For 'n' rows*/
#include<stdio.h>
main()
{
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        char c = 'a';
        for (j = 0; j <= i; j++) {
            printf("%c ", c++);
        }
        for (j = i+1; j < n; j++) {
            printf("$ ");
        }
        printf("\n");
    }
    return 0;
}


