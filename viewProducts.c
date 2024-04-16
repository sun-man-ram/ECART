#include<stdio.h>
#include"admin.h"
void viewProducts() 
{

    FILE *file = fopen( "item_details.txt", "r");

    if ( file != NULL) 
    {

        printf( "Item in the list are:\n");
        printf( "\n");
       printf( "\n");

        char name[ 100 ];
        int price, quantity;
        int count=1;

        printf( "id  name price  quanity\n");
        while ( fscanf( file, "%99[^,],%d,%d\n", name, &price, &quantity) == 3) 
        {
            printf( "%d, %s, %d, %d\n",count++, name, price, quantity);
        }
         fclose( file); // Close the file
    }
}
