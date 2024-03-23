// Including header
#include"Inverted_Index.h"

// Funtion to search the element in the Database
int search_database(main_node_t **head,char *word)
{
   // Traverse till NULL
   while(head)
   {
      // Compare the word
      if(strcmp(head->word, word))
	 // Word not found incremenet head
	 head= head->link;
      else
      {
	 // Word Found
	 // Display the output
	 return SUCCESS;
      }
   }
   printf("The word %s is not found in the database\n",word);
}
