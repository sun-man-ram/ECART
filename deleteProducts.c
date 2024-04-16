#include<stdio.h>
#include"admin.h"
#include<string.h>
void deleteProducts()
{

    viewProducts();
    printf( "enter the id no of the product which you want to delete\n");
    int delete_id;
    scanf( "%d",&delete_id);
    FILE *file = fopen( "item_details.txt", "r"); 
    char name[100];
        int price, quantity;
        int count=1;
        // to enter all inot dummy file other than the id of the selected
        char item_name_for_dummy_file[100];
        int price_for_dummy_file;
        int quantity_for_dummy_file;
        //to make the file empty
        FILE *file1 = fopen( "dummy_file.txt", "w");
        fclose( file1);
           FILE *file2 = fopen( "dummy_file.txt", "a");
     while ( fscanf( file, "%99[^,],%d,%d\n", name, &price, &quantity) == 3) 
     {
            // printf("%d, %s, %d, %d\n",count++, name, price, quantity);
          
            strcpy( item_name_for_dummy_file,name);
            price_for_dummy_file=price;
            quantity_for_dummy_file=quantity;
         
    if ( file2 != NULL) 
    {
        if( count!=delete_id)
        {
        fprintf( file2, "%s,%d,%d\n", item_name_for_dummy_file,price_for_dummy_file, quantity_for_dummy_file);
         // Close the file
         count++;
        }
        else
        {
            count++;
        }
    }
                
            
         
     }
     fclose( file);
     fclose( file2);
    copying_files();
    viewProducts();
    
    
    
}
            
        
        
        
        
