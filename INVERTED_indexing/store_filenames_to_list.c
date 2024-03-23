// Including header
#include"Inverted_Index.h"

// Funtion for storing file names to the linked list
int store_filenames_to_list(char *file_name, file_node_t **head)
{
   // Create node dynamically
   file_node_t *new = malloc(sizeof(file_node_t));
   // Check if memory allocated 
   if(new == NULL)
      return FAILURE;
   // Copy the elements using string manipulation functions
   strcpy(new->file_name,file_name);
   new->link = NULL;

   // Check if list empty or not
   if(*head == NULL)
   {
      *head = new;
      return SUCCESS;
   }
   // List not empty
   // Variable declaration
   file_node_t *temp = *head,*prev;
   // TRaverse the list till end
   while(temp)
   {
      prev = temp;
      // Check for the elements in the file if file REPEATED
      if(strcmp(file_name, temp->file_name))
	 // Update values if file not repeated
	 temp = temp->link;
      else
	 // File repeated
	 return REPEATED;
   }
   // Update
   prev->link = new;
   return SUCCESS;
}
