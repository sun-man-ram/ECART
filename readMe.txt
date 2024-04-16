THIS PROGRAM IS A MENU DRIVEN C PROGRAM 
THE "main.c" PROGRAM ASKS THE END USER WHETER HE IS A ADMIN OR A CUSTOMER

IF(USER==ADMIN)
THE MAIN PROGRAM WILL BE PASS ITS CONTROL TO "admin_function.c"

HE HAVE FOLLOWING FUNCTIONS ASSIGNED IN "admin.h" header file which is dedicated to provide 
the following functions
void admin_function()
void viewProducts()
void modifyProducts()
void addProducts()
void deleteProducts()
void viewOrders()
void go_back_to_menu()
void copying_files()


void admin_function()- this is the parent function for admin which main.c passes after confirming the user is admin
continously asks the admin about crud operations to be performed sstoring the items in a structure in a file items.txt
here the id of product is virtuallly generated using count rather than having a original id which changes dyanmicallly 
and not to worry about changing the id of product everytime a crud operation is generated

void viewProducts()-access the file and useful in displaying the items in the file

void modifyProducts()-asks the admin to modify the item taking input a id and then modifies the product details taking 
input from the user.this is done maintaing a dummy file and all items are copied into the file ecept the id selected and id
one will be eneted by admin and then the dummy file will be copied into items.txt


void addProducts()-function to add product in the item files which is kindoff structure based on colums

void deleteProducts()- function to delete products taking input of the id of item by the admin 

void viewOrders()-theres a file which gets appended after every item a purchase happns but some error in linking this 
so currently hardcoded in the admin_function in the file itself




IF(USER==CUSTOMER)

THE MAIN PROGRAM WILL BE PASS ITS CONTROL TO "customer.c"
HE HAVE FOLLOWING FUNCTIONS ASSIGNED IN "customer.h" header file which is dedicated to provide 
the following functions

void display_items();
void display_cart();
void add_items();
void add_to_cart(int id);
void bill();
void customer_function();
int finalise_orders();
void empty_cart();
void exit();


the customer maintains a cart and he can add any no of items provided the items are not <1 in the items.txt 








