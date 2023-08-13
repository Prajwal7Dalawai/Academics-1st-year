//8.	Write a C program to read 2 strings, compare both of them. 
//If both are unequal then concatenate the 1st string with the 2nd and print the resultant string; 
//if equal print the success message along with the length of the strings. 
#include<stdio.h>
#include<string.h>
main()
{
	int i,j;
	char s1[50],s2[50],s3[100];
	printf("Enter the first string:\n");
	gets(s1);
	printf("Enter the second string:\n");
	gets(s2);
	if(s1==s2)
	{
		printf("Both the strings are equal.\nLength of first string=%s\nLength of asecond string=%s",strlen(s1),strlen(s2));
	}
	else
	{
		for(i=0;i!='\0';i++)
		s3[j++]=s1[i];
		s3[j++]=' ';
		for(i=0;i!='\0';i++)
		s3[j++]=s2[i];
		s3[j]='\0';
		printf("The resultant string is:\n");
		printf("%s",s3);
		
	}
}
