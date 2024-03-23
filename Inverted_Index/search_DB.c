#include "invertedIndex.h"

int search_DB(main_node_t *head, char *word)
{
    while (head)
    {
	/* Compare the word */
	if (strcmp(head -> word, word))
	    head = head -> link;
	else
	{
	    /* Display in given pattern */
	    /* Word Hi present in 2 files
	       In file file1.txt 1 time(s)
	       In file file2.txt 2 time(s)
	     */
	    return SUCCESS;
	}
    }
    printf("The word %s is not found in the database\n", word);
}
