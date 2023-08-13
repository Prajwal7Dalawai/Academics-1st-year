/* WACP to open a file named INVENTORY abd store the following data
Item name       Number      Price       Quantity
AAA-1           111         17.5         115
BBB-2           125         36           75
CCC-3           247         31.75        104
Extend the program:
a) To read the data from the file INVENTORY and store the above data.
b)Append the additional items to the file INVENTORY and print the contents of the file.*/
#include<stdio.h>
int main()
{
    FILE *fp;
    char itemname[20],choice;
    int number,quantity,h,i;
    float price,value;
    long n;
    fp=fopen("INVENTORY","w");
    printf("How many items?\n");
    scanf("%d",&h);
    fprintf(fp,"Itemname\tNumber\tPrice\tQuantity\n");
    n=ftell(fp);
    printf("Itemname\tNumber\tPrice\tQuantity\n");
    for(i=0;i<h;i++)
    {
        printf("\nEnter the Name,number,price and quantity of the item respectively.\n");
        scanf("%s%d%f%d",itemname,&number,&price,&quantity);
        fprintf(fp,"%s\t\t%d\t\t%.2f\t%d\n",itemname,number,price,quantity);
    }
    fclose(fp);
    fp=fopen("INVENTORY","r");
    fseek(fp,n,0);
    printf("Itemname\tNumber\tPrice\tQuantity\tValue\n");
    while(!feof(fp))
    {
        fscanf(fp,"%s %d %f %d",itemname,&number,&price,&quantity);
        if(feof(fp))
        break;
        value=quantity*price;
        printf("%s\t\t%d\t%.2f\t%d\t\t%.2f\n",itemname,number,price,quantity,value);
    }
    fclose(fp);
    printf("Do you want to append?(y/n)\n");
    scanf(" %c",&choice);
    if(choice!='y' || choice!='Y')
    {
        printf("How many items do you want to append?\n");
        scanf("%d",&h);
            fp=fopen("INVENTORY","a");
            for(i=0;i<h;i++)
            {
                printf("\nEnter the name, number,price, and quantity of the item.\n");
                scanf("%s %d %f %d",itemname,&number,&price,&quantity);
                fprintf(fp,"%s\t\t%d\t%.2f\t%d\n",itemname,number,price,quantity);
            }
            fclose(fp);
    }
    else
    exit(1);
    fp=fopen("INVENTORY","r");
    fseek(fp,n,0);
    printf("\nFINAL INVENTORY TABLE\n");
    printf("Itemname\tNumber\tPrice\tQuantity\tValue\n");
    while (!feof(fp))
    {
        fscanf(fp,"%s %d %f %d",itemname,&number,&price,&number);
        if(feof(fp))
        break;
        value=price*quantity;
        printf("%s\t\t%d\t%.2f\t%d\t\t%.2f\n",itemname,number,price,quantity,value);
    }
    fclose(fp);
return(0);
}