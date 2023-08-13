/*WAMCP using pointers to recieve a character string & character as an arguement.
Delete all the occuraces of the characters in a string.
The function should return a string with zero values.*/
#include<stdio.h>
void read(char *s)
{
    printf("Enter the character:\n");
    scanf("%s",s);
}
void delete(char *s, char ch)
{
    char str[20],ch1;
    int i=0,j=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(ch!=s[i])
        {
            ch1=s[i];
            str[j]=ch1;
            j=j+1;
        }
    }
    str[j]='\0';
    printf("The character %c has been deleted.\n",ch);
    printf("The resultant string is %s\n",str);
}
int main()
{
    char s[20],ch;
    read(s);
    printf("Enter the character you want to delete.\n");
    scanf(" %c",&ch);
    delete(s,ch);
    return(0);
}