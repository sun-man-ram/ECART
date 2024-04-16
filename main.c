#include<stdio.h>
#include"customer.h"
#include"admin.h"

void main()
{
    int checker;
    printf( "enter 1 if you are admin and 2 if you are a customer  ");
    scanf( "%d",&checker);
    if ( checker==1)
    {
    admin_function();
    }
    if( checker==2)
    {
        customer_function();
    }

}