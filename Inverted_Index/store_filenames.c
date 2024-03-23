/*
 * Name 	: Nithya M
 * Date 	:
 * Description 	:
 * Input 	:
 * Output 	:
 */

#include "invertedIndex.h"

void validate_n_store_filenames(file_node_t **file_head, char *filenames[])
{
    int i = 0, empty;

    // Run loop until reach NULL
    while (filenames[i])
    {
	/* collect the return value of the function */
	empty = IsFileValid(filenames[i]);

	/* Checking the return value */
	if (empty == NOT_PRESENT)
	{
	    // Print error message
	    printf("Error : The file %s is not exist\nSo we are not adding into list\n", filenames[i]);

	}
	else if (empty == FILE_EMPTY)
	{
	    printf("Error : The file %s is an empty file\nSo we are not adding into list\n", filenames[i]);
	}
	else
	{
	    /* call store_filenames_to_list function to add the file into list */
	    ret = store_filenames_to_list(filenames[i], file_head);


	    /* Check the return value of the function */

	    if (ret == REPEATED)
	    {
		printf("Error : File %s is reapeted\n", filenames[i]);
	    	printf("So we are not adding this file into the list\n");
	    }
	    else
	    {
		printf("Successfull : file %s is added into the list\n", filenames[i]);
	    }

	}
	i++;
    }
    return 0;   
}


int IsFileValid(char *fname)
{
    /* open the file and check */

    /* whether file is present */

    /* if file not present return NOT_PRESENT */

    /* it is a empty file or not */

    /* if the file is empty return FILE_EMPTY */

    /* return SUCCESS */
}
