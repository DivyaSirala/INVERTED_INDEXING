#include "invertedIndex.h"

int update_DB(file_node_t **file_head, main_node_t **hash_head)
{
    char fname[NAMELENGTH];
    /* Read the filename to be updated in the Database from user */
    printf("Enter the new filename to be updated in the Database : ");
    scanf("%s", fname);

    /* 1. Validate the file
       	  1. Check file present
	  2. Check file empty
	  if above conditions true print error
       2. Store the filename in file_node list
	  1. Check the file is present in the list already
	  if present then print error
	  else add that filename to the list
     */

    validate_n_store_filenames(file_node, &fname);

    file_node_t *temp;
    while (temp -> link)
    {
	temp = temp -> link;
    }
    /* Create Database function */
    create_DB(temp, hash_head);
    printf("Successfull : Creation of database for file %s\n", fname);
    return SUCCESS;
}
