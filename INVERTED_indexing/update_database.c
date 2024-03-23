// Including heading
#include"Inverted_Index.h"

// Funtion to Update the database with new file
int update_database(file_node_t **file_head, main_node_t **hash_head)
{
   char file_name[NAME_LENGTH];
   // Read the filename to ne updated in the Database from User
   printf("Enter the new filename to be updated int the Database : ");
   scanf("%s",file_name);

/*1.Validate the file
      1. Check the file present
      2. Check the file empty
      if abovde conditions are true print error
   2. Sroew the filename in file_node list
      1. Check the file is present in the list already
      If present then print error
      else add that filename in the list */

   // Validate
   validate_and_store_filenames(file_node, &file_name);
   file_node_t *temp;
   // Traverse till end node
   while(temp->link)
   {
      temp = temp->link;
   }
   // Create Database
   create_database(temp,hash_head);
   printf("SUCCESSFUL : Creation of Database for file %s is sucessful. \n",file_name);
   return SUCCESS;
}
