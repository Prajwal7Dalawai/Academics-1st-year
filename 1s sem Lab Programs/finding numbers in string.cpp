//8.	Write a C program to find and print the number of digits in a given string.
#include<stdio.h>
main() {
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++) {
        if(str[i]>='0' && str[i]<='9') {
            count++;
        }
    }

    printf("Number of digits in the string: %d", count);
}
