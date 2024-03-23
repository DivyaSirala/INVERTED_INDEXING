/*
 * Name 	: Nithya M
 * Date 	:
 * Description 	:
 * Input 	:
 * Output 	:
 */

#include "invertedIndex.h"
int store_filenames_to_list(char *f_name, file_node_t **head)
{
    /* Create the node */
    file_node_t *new = malloc(sizeof(file_node_t));

    /* Check memory allocated */
    if (!new)
	return FAILURE;

    /* Update data and link */
    strcpy(new -> f_name, f_name);
    new -> link = NULL;

    /* List is empty or not */
    if (*head == NULL)
    {
	*head = new;
	return SUCCESS;
    }

    /* Traverse the list till last node */
    file_node_t *temp = *head, *prev;
    while (temp)
    {
	prev = temp;
	if (strcmp(temp -> f_name, f_name))
	    temp = temp -> link;
	else
	    return REPEATED;
    }
    prev -> link = new;
    return SUCCESS;
}
