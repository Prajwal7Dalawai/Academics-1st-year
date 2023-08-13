/* WAMCP to perform insertion sort on the marks of n number of students in the course of C programming.*/
#include<stdio.h>
#include<stdlib.h>
void read(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the marks of the student %d:\n",i+1);
        scanf("%d",(a+i));
    }
}
void sort(int *a, int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(a[j]>temp && j>=0)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    printf("The sorted marks is:\n");
    for(i=0;i<n;i++)
    printf("%d\n",*(a+i));
}
int main()
{
    int *a,n;
    printf("How many students?\n");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    read(a,n);
    sort(a,n);
    free(a);
    return(0);
}