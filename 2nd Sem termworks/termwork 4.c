/* WACP to input a list of numbers within the range 0-a. From user end frind frequency of each of them.*/
#include<stdio.h>
#include<stdlib.h>
main()
{
    int i,*freq,*a,n;
    a=(int *)malloc(n*sizeof(int));
    printf("Enter the size of the list:\n");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the number[%d]: ",i);
        scanf("%d",&a[i]);
        if(a[i]<0 || a[i]>4)
        {
            printf("The numbers should be only entered between 1-4.\n. Enter the number again.\n");
            i--;
        }
         else
         continue;
    }
    freq=(int *)malloc(5*sizeof(int));
    for(i=0;i<4;i++)
    freq[a[i]]++;
    printf("The frequencies of the numbers are:\n");
    for(i=0;i<4;i++)
    printf("freq[%d]=%d\n",i,freq[i]);
    free(freq);
    free(a);
}

