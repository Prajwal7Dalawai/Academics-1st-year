//9.	Write a C program to show the use of the following built-in functions in strings:
//i. strcat ii. Strcpy iii. strcmp
#include<stdio.h>
#include<string.h>
main()
{
	int len;
	char s1[40],s2[40],s3[80];
	printf("Enter the first string:\n");
	gets(s1);
	printf("Enter the second string:\n");
	gets(s2);
	if(strcmp(s1,s2)==0)
	{
		printf("Strings are equal");
	}
	else
	printf("Two strings are different\n");

strcpy(s3,s1);
printf("Original String:- %s",s1);
printf("Copied String:- %s",s3);
strcat(s3,s2);
printf("Concatenated string:- %s",s3);
printf("String 1= %s\nString 2:- %s\nString 3: %s\n",s1,s2,s3);
}

