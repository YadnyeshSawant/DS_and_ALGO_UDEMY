#include<stdio.h>
#include<string.h>
struct item
{
    int code;
    char name[50];
    int price;
}I[50];
void main()
{
    int n,i,max_price,z;
    char item_name[10];
    printf("ENTER TEH NUMBER OF ENTRIES: \t");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        printf("ENTER THE ITEM CODE: \t");
        scanf("%d",&I[i].code);
        printf("ENTER THE NAME OF THE ITEM: \t");
        scanf("%s",I[i].name);
        printf("ENTER THE PRICE OF THE ITEM: \t");
        scanf("%d",&I[i].price);
    }
    printf("\n-------------------------SEARCH DETAILS--------------------\n");
    max_price = I[0].price;
    for ( i = 0; i < n; i++)
    {
        if (I[i].price>max_price)
            max_price = I[i].price;
    }
    for ( i=0; i<n; i++)
    {
        if(I[i].price == max_price)
            printf("\nITEM WITH MAX PRICE\n");
            printf("CODE = %d\nNAME = %s\nPRICE = %d\n",I[i].code,I[i].name,I[i].price);
    }
    printf("ENTER THE NAME OF ITME TO BE SEARCHED\t");
    scanf("%s",item_name);
    
    for ( i = 0; i < n; i++)
    {
        z = strcmp(I[i].name,item_name);
    }
    printf("Z = %d",z);
        if (z == 0)
            printf("ITEM FOUND\n");
        else
            printf("INVALID ITEM NAME\n");
}