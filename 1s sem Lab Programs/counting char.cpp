//9.	Write a C program to find the number of lowercase, uppercase letters, digits and special characters.
// Implement this without using any built-in string handling functions. Print all the counts along with the input string.
#include <stdio.h>

 main() {
    char str[100];
    int i, lowercase, uppercase, digits, special;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    i = lowercase = uppercase = digits = special = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            lowercase++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            uppercase++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        else {
            special++;
        }
        i++;
    }

    printf("\nInput string: %s\n", str);
    printf("Number of lowercase letters: %d\n", lowercase);
    printf("Number of uppercase letters: %d\n", uppercase);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", special);
}
