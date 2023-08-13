/* WACP to store a character string in a block of memory space created by malloc() and then modify the same to store the largest string.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char *buffer;
    if((buffer=(char *)malloc(10))==0)
    {
        printf("Malloc failed.\n");
        exit(1);
    }
    else
    {
      strcpy(buffer,"HYDERABAD");
    printf("Buffer contains %s\n",buffer);
    }
    if((buffer=(char *)realloc(buffer,15))==0)
    {
        printf("Reallocating failed.\n");
        exit(0);
    }
    printf("Buffer still contains %s\n",buffer);
    strcpy(buffer,"SECUNDERBAD");
    printf("Buffer now contains %s\n",buffer);
    free(buffer);
    return(0);
}