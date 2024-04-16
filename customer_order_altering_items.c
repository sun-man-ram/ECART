#include<stdio.h>
#include<string.h>
#include"admin.h"
#include"customer.h"
void customer_order_altering_items( int id)
{
//empty the dummy file
char item_name_for_dummy_file[100];
        int price_for_dummy_file;
        int quantity_for_dummy_file;

 FILE *file2 = fopen( "dummy_file.txt", "w");
        fclose(file2);
   FILE *file3 = fopen( "item_details.txt", "r"); 
   FILE *file4 = fopen( "dummy_file.txt", "a");

   if ( file3 != NULL) 
   {
       
        char name[100];
        int price, quantity;
        int count=1;
        printf( "id  name price  quanity\n");
        while ( fscanf(file3, "%99[^,],%d,%d\n", name, &price, &quantity) == 3) 
        {
           strcpy( item_name_for_dummy_file,name);
           quantity_for_dummy_file=quantity;
           price_for_dummy_file=price;
           
           // now i need to write in this file
           if( count!=id)
           {
           fprintf( file4, "%s,%d,%d\n", item_name_for_dummy_file,price_for_dummy_file, quantity_for_dummy_file);
            // Close the file
             count++;
        }
        else
        {
            quantity_for_dummy_file=quantity_for_dummy_file-1;
          fprintf(file4, "%s,%d,%d\n", item_name_for_dummy_file,price_for_dummy_file, quantity_for_dummy_file);
             count++;
        }
    }
           
        }
        
         fclose(file3); // Close the file
         fclose(file4);
      copying_files();

}