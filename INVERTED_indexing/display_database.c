// Including header
#include"Inverted_Index.h"

// Function to display tje database
int display_database(main_node_t **head)
{
   printf("[Index_no]\t[Word]\t[File_count]\t[Word_count]\n");
   printf("------------------------------------------------------------------\n");
   // Run a loop till 27 indices
   for(int i=0,i<27;i++)
   {
      if(head[i] != NULL)
      {
	 // Display the index
	 printf("[%d]\t",i);
	 main_node_t *temp = head[i];
	 // Run a loop till all main nodes are traversed
	 while(temp)
	 {
	    // Display word,file count
	    printf("%s\t%d file(s) : ",temo->word,temp->file_count);
	    main_node_t *Sub_temp = temp->sub_link;
	    // Run a loop till all sub nodes are printed
	    while(Sub_temp)
	    {
	       // Display file name and word count
	       printf("%s\t: %d : ", Sub_temp->file_name,Sub_temp->word_count);
	       Sub_temp = Sub_temp->link;
	    }
	    printf("->NULL\n");
	    temp = temp->link;
	 }
      }
}
