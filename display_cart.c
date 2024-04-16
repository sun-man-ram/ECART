#include<stdio.h>
#include"admin.h"
#include"customer.h"
void display_cart ()
{
    
 FILE *file = fopen( "cart.txt", "r");
    if ( file != NULL) 
    {
        printf("Item in the cart are:\n");
        printf("\n");
       printf("\n");
        char name[100];
        int price, quantity;
        int count=1;
        printf( "id  name price  quanity\n");
        while ( fscanf( file, "%99[^,],%d,%d\n", name, &price,&quantity) ==3 ) 
        {
            printf( "%d, %s, %d\n",count++, name, price);
        }
         fclose( file); // Close the file
    } 











}