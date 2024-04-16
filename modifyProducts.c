#include<stdio.h>

#include"admin.h"

#include<string.h>

void modifyProducts()
{


// THE logic is simple here all the items details will be copied into dummy file except the id of the 
// that to be modified and the modified name price and quantity is seperately stored in dummy file 
//then the dummy file contents is to be stroed in original items.txt file



    viewProducts ();

    printf( "enter the id no which you want to modify\n");
    int checker4;
    scanf("%d",&checker4);

    printf( "enter the new details of the product\n");

    char modify_new_name[100];
    int modify_new_price;
    int modify_new_quanity;
    char item_name_for_dummy_file[100];
    int price_for_dummy_file;
    int quantity_for_dummy_file;

    printf( "enter new name");
    scanf( "%s",modify_new_name);
    printf( "enter new price");
    scanf( "%d",&modify_new_price);
    printf( "enter new quanity");
    scanf( "%d",&modify_new_quanity);

    // emptying dummy file
    FILE *file2 = fopen( "dummy_file.txt", "w");
        fclose(file2);
    // opening the file in data to get values 
     FILE *file3 = fopen("item_details.txt", "r"); 
     
     FILE *file4 = fopen("dummy_file.txt", "a");
    if (file3 != NULL) 
    {
       
        char name[100];
        int price, quantity;
        int count=1;
        printf("id  name price  quanity\n");
        while (fscanf(file3, "%99[^,],%d,%d\n", name, &price, &quantity) == 3) {


           strcpy(item_name_for_dummy_file,name);
           quantity_for_dummy_file=quantity;
           price_for_dummy_file=price;
           
           // now i need to write in this file
           if( count!=checker4)
           {
        fprintf(file4, "%s,%d,%d\n", item_name_for_dummy_file,price_for_dummy_file, quantity_for_dummy_file);
         // Close the file
         count++;

        }

        else
        
        {

            fprintf(file4, "%s,%d,%d\n", modify_new_name,modify_new_price, modify_new_quanity);
             count++;

        }
    }
           
        }
        
         fclose( file3); // Close the file
         fclose( file4);
         
    copying_files();
    viewProducts();
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   