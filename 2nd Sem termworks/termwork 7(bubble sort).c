/* WAMCP to sort the given marks of n students in the course of C programming by bubble sorting technique.*/
#include<stdio.h>
#include<stdlib.h>
void read(int *a, int n)
{
    for(int i=0;i<n;i++)
    {
    printf("Enter the marks of the student %d:\n",i+1);
    scanf("%d",(a+i));
    }
}
void sort(int *a,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if( a[j+1]<a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            else
            continue;
        }
    }
    printf("The sorted elements are:\n");
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