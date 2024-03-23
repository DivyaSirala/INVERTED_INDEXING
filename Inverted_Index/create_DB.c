/*
 * Name 	: Nithya M
 * Date 	:
 * Description 	:
 * Input 	:
 * Output 	:
 */

#include "invertedIndex.h"

int create_DB(file_node_t *file_head, main_node_t **head)
{
    while (file_head)
    {
	read_datafile(file_head -> f_name, head);
	file_head = file_head -> link;
    }
}


int read_datafile(char *fname, main_node_t **head)
{
    FILE *fptr = fopen(fname, "r");
    char word[NAMELENGTH];
    int index, flag = 1;
    /* Reading the word from file */
    while (fscanf(fptr, "%s", word) != EOF)
    {
	/* Finding index number */
	flag = 1;
	index = tolower(word[0]) % 97;

	if (index > 25)
	{
	    index = 26;
	}
	if (head[index] != NULL)
	{
	    main_node_t *temp = head[index];

	    /* Comparing word in  main node with word from file to be inserted */
	    while (temp)
	    {
		if (strcmp(temp -> word, word) == 0)
		{
		    /* If word found then call update word count function to update the word / file count */
		    update_word_count(&temp, fname);
		    flag = 0;
		    break;
		}
		temp = temp -> link;
	    }
	}
	/* If head[index] == NULL then it is empty (or) the word is not present */
	if (flag)
	    insert_at_last_main(&head[index], word);
    }

    printf("Successfull : Creation of database for file  %s\n", fname);
    return SUCCESS;
}

int update_word_count(main_node_t **head, char *fname)
{
    sub_node_t *sub_temp = (*head) -> sub_link;

    /* Traverse and compare the filename */

    /* If filename matches then increment word count */

    /* if no then increment file count in main node */

    /* create sub node and update the word and file count and link with NULL */

    /* Establish the link between previous sub node and new sub node */

    return SUCCESS;
}
