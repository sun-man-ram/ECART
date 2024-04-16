#include<stdio.h>
#include"admin.h"
void addProducts()
{
    
    char name[100];
    int price;
    int quantity;

    printf( "admin kindly enter product name\n");
    scanf( "%s",name);

    printf( "admin kindly enter price of the item\n");
    scanf( "%d",&price);

    printf( "admin kindly enter the quanity of item");
    scanf( "%d",&quantity);

    FILE *file = fopen( "item_details.txt", "a"); 
    if (file != NULL) 
    {
        fprintf( file, "%s,%d,%d\n", name, price, quantity);
        fclose( file); // Close the file
        printf( "thanks for addming the items are");
        viewProducts();
        
    }
    else 
    {
        printf( "Error opening file!\n");
    }
}