/*WAMCP to find the maximum and the minimum element of a given n elements.
 Use this function to compute highest and lowest marks of n students in a pirticular course.
 Process array using pointers.*/
#include<stdio.h>
void read(int *a,int n)
{
    int i;
    printf("Enter the marks of the students:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the marks of the student %d\n",i+1);
        scanf("%d",(a+i));
    }
}
int minmax(int *a,int n, int *max)
{
    int i,min;
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    *max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>=*max)
        *max=a[i];
    }
    return min;
}
main()
{
    int a[10],n,max,min;
    printf("How many students?\n");
    scanf("%d",&n);
    read(a,n);
    min=minmax(a,n,&max);
    printf("Minimum marks=%d\n",min);
    printf("Maximum marks=%d\n",max);
}