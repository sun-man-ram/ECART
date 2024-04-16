#include<stdio.h>    
#include<stdlib.h>
#include<string.h>
#include"admin.h"

    void copying_files()
   
    {    

    char ch, source_file [25], target_file [25];

   FILE *source, *target;    

 strcpy( source_file,"dummy_file.txt");
   source = fopen( source_file, "r");
  strcpy( target_file,"item_details.txt");
    target = fopen( target_file, "w");

  while( ( ch = fgetc( source) ) != EOF )
        fputc( ch, target);      
        fclose( source);        
        fclose( target);
}