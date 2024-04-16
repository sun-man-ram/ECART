#include<stdio.h>
#include"admin.h"
#include"customer.h"

void empty_cart()
{
      order_summary();

      FILE *file1 = fopen( "cart.txt", "w");
        fclose( file1);
        printf("thanks for paying the amount\n");
        printf("thanks for coming to our shop see you again\n");
}