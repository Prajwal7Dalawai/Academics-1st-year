/* A book shop uses a personal computer to maintain the inventory of books that are being sold at the shop.
The list includes details such as author, title, price, publisher, stock position, etc... Whenever the customer want a book,
the shopkeeper inputs the title and the author of the book, and system replies whether is it available or not.
If the system is in list, then the system displays the details of the book and asks for number of copies.
If requested number of copies available, then total cost of the books is displayed.
Otherwise, the message, "Requested copies are not available" is displayed.*/
#include<stdio.h>
#include<string.h>
struct book{
    char title[50],publisher[50],author[50];
    int price,stock;
};
void read(struct book *b,int n)
{
    int i;
    printf("Creating the library of the books!!\n\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the details of the book %d.\n",i+1);
        printf("Title of the book: ");
        scanf("%s",b->title);
        printf("Author of the book: ");
        scanf("%s",b->author);
        printf("Publisher: ");
        scanf("%s",b->publisher);
        printf("Price of the book: ");
        scanf("%d",&b->price);
        printf("Copies available: ");
        scanf("%d",&b->stock);
    }
    printf("\n\nLIBRARY OF THE BOOKS IS CREATED. YOU CAN CARRY OUT THE FURTHER PROCESS\n\n");
}
void print(struct book *b)
{
    printf("The details of the book is as follows.\n");
    printf("Title: %s\n",b->title);
    printf("Author: %s\n",b->author);
    printf("Publisher: %s\n",b->publisher);
    printf("Price: %dRs\n",b->price);
    printf("No of copies: %d\n",b->stock);
}
int main()
{
    struct book b[10];
    char bookname[50],authorname[50],choice;
    int copies,n,i,found=0;
    printf("Create library of how many books?\n");
    scanf("%d",&n);
    read(b,n);
    search:{
        printf("Enter the Title of the book you want: ");
        scanf("%s",bookname);
        printf("Enter the Author of the book: ");
        scanf("%s",authorname);
        for(i=0;i<n;i++)
        {
            if(strcmp(b[i].title,bookname)==0 && strcmp(b[i].author,authorname)==0)
            {
                printf("Book is available.\n");
                found=1;
                print(&b[i]);
                printf("How many copies of the book you want?\n");
                scanf("%d",&copies);
                if(b[i].stock>=copies)
                    printf("The requested number of copies are available and the total cost is, %d\n",copies*b[i].price);
                else
                    {
                        printf("The required number of copies are not available.\n");
                        break;
                    }
            }
        else
        continue;
    }
    if(found==0)
    printf("OOOOPPS!!! Couldn't find the requested book in our database.!!\n");
    }
    printf("Want to search again?(y/n)\n");
    scanf(" %c",&choice);
    if(choice=='y' || choice=='Y')
    goto search;
    else
    exit(0);
    return(0);
}