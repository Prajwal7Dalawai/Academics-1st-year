/* WAMCP to search the element from the array of n elements using binary search tecnique.*/
#include<stdio.h>
void read(int *a,int n)
{
    int i;
    printf("Enter the elements.\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",(a+i));
    }
}
void search(int *a,int n,int ele)
{
    int i,beg,end,mid,found=0;
    beg=0;
    end=n;
    while(beg!=end)
    {
        mid=(beg+end)/2;
        if(a[mid]==ele)
        {
            found=1;
            break;
        }
        else 
        if(ele<a[mid])
        end=mid-1;
        else
        beg=mid+1;
    }
    if(found==1)
    printf("The element %d is located at %d position\n.",ele,mid+1);
    else
    printf("Invalid element entered.\n");
}
int main()
{
    int a[10],ele,n;
    printf("How many elements?\n");
    scanf("%d",&n);
    read(a,n);
    printf("Enter the element you want to search.\n");
    scanf("%d",&ele);
    search(a,n,ele);
}