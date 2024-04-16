#include<stdio.h>

#include"admin.h"

#include"customer.h"

void add_items ()
 {

//displays the items

display_items();

printf("add the id no of item to be added\n");

// asks id to be added

int id_to_be_added;

scanf("%d", &id_to_be_added);

//passes to function add_to_cart(the id to be added)

add_to_cart( id_to_be_added );

}