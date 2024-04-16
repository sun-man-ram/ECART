#include<stdio.h>
#include"admin.h"
#include"customer.h"
int finalise_orders()
{
    printf( "enter 1 to finalise and 2 to view items in the list again");
            int checker1=0;
            scanf( "%d",&checker1);
            if( checker1==1)
            {

   


            
                FILE *file1 = fopen( "cart.txt", "w");
        fclose( file1);
        printf( "thanks for coming to our shop see you again");
            return 1;
            }
            if( checker1==2)
            {
                printf( "items you can add 😊");
                display_items();
                return 0;
            }
           
}