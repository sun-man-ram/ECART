#include "admin.h"
#include<stdio.h>

void admin_function()
{
    int checker2;
    
    printf( "hello admin\n");

    while(1)
    {
    printf( "enter 1 to view products\n");
    printf( "enter 2 to add products\n");
    printf( "enter 3 to delete products\n");
    printf( "enter 4 to modify products\n");
    printf( "enter 5 to view orders\n");
    printf( "enter 6 to exit");
    scanf( "%d",&checker2);

    if(checker2==1)
    {
        viewProducts();
    }

    if(checker2==2)
    {
        addProducts();
    }

    if(checker2==3)
    {
        deleteProducts();
    }

    if(checker2==4)
    {
        modifyProducts();
    }

    if(checker2==5)
    {
     
    //  read_orders();
   // some issue in linking this with a special file so hard coding

     

    FILE *file = fopen( "report.txt", "r");

    if ( file != NULL) 
    {

        printf( "Items ordered in the list are");
        printf("\n");
       printf("\n");

        char name[ 100 ];
        int price, quantity;
        int count=1;

        printf("id  name price  quanity\n");
        while ( fscanf( file, "%99[^,],%d,%d\n", name, &price, &quantity) == 3) 
        {
            printf( "%d, %s, %d\n",count++, name, price);
        }
        printf("\n");
        printf("\n");
        printf("\n");
         fclose( file); // Close the file
    }


    }

    if(checker2==6)
    {
        printf( "good bye admin");
        break;
    }

    }
}