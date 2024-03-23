//Including header
#include "Inverted_Index.h"

// Function for validating the files and storing the filenames
void validate_and_store_filenames(file_node_t **file_head,char *filenames[])
{
   // Variable initialization
   int i=0,empty;
   // Run till all file names are read
   while(filenames[i])
   {
      // Call funtion to check if file valid or not
      empty = IsFileValid(filenames[i]);
      // Check if file Not present
      if(empty == NOT_PRESENT)
      {
	 printf("ERROR : File %s not present\n", filenames[i]);
	 printf("Thus the file cannot be added to the file list\n");
      }
      // Check for empty file
      else if(empty == FILE_EMPTY)
      {
	 printf("ERROR : File %s is an empty file\n",filenames[i]);
	 printf("Thus the file cannot be added to the file list\n");
      }
      // File present and non empty
      else
      {
	 // Function call to add the file into the list
	 ret = store_filenames_to_list(filenames[i],file_head);

	 // Check if file already present or not
	 if(ret == REPEATED)
	 {
	    printf("Error : File %s is repeated\n",filenames[i]);
	    printf("Thus the file cannot be added to the file list\n");
	 }
	 else
	 {
	    printf("SUCCESSFUL :  File %s is added into the list\n",filenames[i]);
	 }
      }
      // Increment i
      i++;
   }
   return 0;
}


/*Funtion to check if file valid or not*/
int IsFileValid(char *file_name)
{
   // Open the file and check if repeated or no
   
   // Whether file is present or not

   // If file not present return NOT_PRESENT
   else if()
      return NOT_PRESENT;   
   else
   {
      // If it is empty or not
      if(Fseek(to, 0, SEEK_END) == NULL)
	 return SUCCESS;
      // If the file empty return FILE_EMPTY
      else
	 return FILE_EMPTY;
   }
   return SUCCESS;
}   
