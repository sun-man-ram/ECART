#include<stdio.h>
#include"admin.h"
#include"customer.h"
void customer_function()
{
    int checker3;
        display_items();
        while(1){
        printf( "enter 1 to view items\n");
        printf( "enter 2 to add items\n");
        printf( "enter 3 to view your cart\n");
        printf( "enter 4 to bill\n");
        printf( "enter 5 to exit\n");
        scanf( "%d",&checker3);
        if( checker3==1)
        {
            display_items();
        }
        if( checker3==2)
        {
            add_items();
        }
        if( checker3==3)
        {
            display_cart();
        }
        if( checker3==4)
        {
            bill();
            int a=0;
            a=finalise_orders();
            if( a==1)
            {
                break;
                }

            }
        if( checker3==5)
        {
    bill();
      empty_cart();
            break;
        }
      }
}