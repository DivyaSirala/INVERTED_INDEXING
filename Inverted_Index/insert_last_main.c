#include "invertedIndex.h"

int insert_at_last_main(main_node_t **head, char *word)
{
    /* Create the node */
    main_node_t *new = malloc(sizeof(main_node_t));

    if (new == NULL)
	return FAILURE;

    /* update word, file count */
    new -> f_count = 1;
    strcpy(new -> word, word);

    /* Update the links */
    new -> sub_link = NULL;
    new -> link = NULL;

    /* Upading main node sub link */
    update_sub_node(&new);

    /* Check list empty */
    if (*head == NULL)
    {
	*head = new;
	return SUCCESS;
    }

    main_node_t *temp = *head;

    /* Traversing till last node */
    while (temp -> link)
    {
	temp = temp -> link;
    }

    /* Establish link */
    temp -> link = new;
    return SUCCESS;


}
    
int update_sub_node(main_node_t **main_node)
{
    /* Create the node */
    sub_node_t *new_sub;
    /* Allocate the memory dynamically for new_sub */

    /* Update the word count, filename, link = NULL */

    /* Updating sub link of main node  */
    main_node -> sub_link = new_sub;
}
