#include<stdio.h>
#include"admin.h"
#include"customer.h"
void bill()
{

 FILE *file = fopen( "cart.txt", "r"); 
     if ( file != NULL) 
     
     {
        
        char name[100];
        int price, quantity;
        int count=1;
        int net_amount=0;

        printf( "id  name price  quanity\n");

        while ( fscanf(file, "%99[^,],%d,%d\n", name, &price,&quantity) == 3) 
        {
            net_amount=net_amount+price;
            }

            printf( "your bill is %d without gst\n",net_amount);
            int gst;
            gst=( net_amount*0.18 );
            net_amount= ( net_amount+gst );

            printf( "inclusive of gst your amount is %d\n",net_amount);
            printf( "here are the list of your items\n");
            display_cart();
            
         fclose( file); // Close the file
    } 

















}