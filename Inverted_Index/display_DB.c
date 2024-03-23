#include "invertedIndex.h"

int display_DB(main_node_t **head)
{
    printf("[index_no]\t[word]\t[file_count]\t[filename]\t[word_count]\n");
    printf("--------------------------------------------------------------------------\n");

    /* Run a loop */
    for (int i = 0; i < 27; i++)
    {
	if (head[i] != NULL)
	{
	    /* Display the index */
	    printf("[%d]\t", i);

	    main_node_t *temp = head[i];

	    while (temp)
	    {
		/* Display word, file count */
		printf("%s\t%d  file(s) : ", temp -> word, temp -> f_count);
		main_node_t *Stemp = temp -> sub_link;

		while (Stemp)
		{
		    /* Display filename and word count */
		    printf("%s\t: %d : ", Stemp -> f_name, Stemp -> w_count);
		    Stemp = Stemp -> link;
		}
		printf("-> NULL\n");

		temp = temp -> link;
	    }
	}
    }

}
