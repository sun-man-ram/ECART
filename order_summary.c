#include<stdio.h>
#include"admin.h"
#include"customer.h"
void order_summary ()
{

    // basically a program to store the orders in a file where the orders can be reported to admin :)
   // now i need to append the deatils of the things into a seperate file
    int id=1;
    FILE *file = fopen( "", "r");
   FILE *file2=fopen( "cart.txt","a"); 
    if ( file != NULL) 
    {

        
        char name[100];
        int price, quantity;
        int count=1;

        while ( fscanf(file, "%99[^,],%d,%d\n", name, &price, &quantity) == 3) 
        {
         if( count==id)
         {
            if( quantity>0)
            {
            fprintf( file2, "%s,%d,%d\n", name,price,quantity);
             customer_order_altering_items( id);
            }
            else
            {
               printf( "sry the product is out of stock\n");
            }
        }
         count++;
        }
       
         fclose( file); 
         fclose( file2);
      

         // Close the file
    } 


}