// Including header
#include"Inverted_Index.h"


// Funtion for Creating database
int create_database(file_node_t *file_head, main_node_t **head)
{
   // Traverse till all files are read
   while(file_head)
   {
      // Read the data from each file
      read_data_file(file_head->file_name, head);
      // Update
      file_head = file_head->link;
   }
}


// Funtion to read all the word from the file
int read_data_file(char *file_name, main_node_t **head)
{
   // file pointer to open the file in read mode
   FILE *fptr = fopen(file_name, "r");
   // Variable declaration
   char word[NAME_LENGTH];
   int index,flag =1;
   // Reading the word from file
   while(fscanf(fptr, "%s", word) != EOF)
   {
      flag =1;
      // Finding index number converting every first letters to lowercase 
      index = tolower(word[0]) % 97;
      // Save alphabets till index 25 and the special characters at index 26
      if(index > 25)
      {
	 index = 26;
      }
      // Checking if head of index is null 
      if(head[index] != NULL)
      {
	 // Create main and sub node and update values
	 main_node_t *temp =head[index];
	 // Comparing word in main node with word from file to be inserted
	 while(temp)
	 {
	    // Check if word repeated or not 
	    if(strcmp(temp->word,word) == 0)
	    {
	       // If word repeated update word count
	       update_word_count(&temp,file_name);
	       // Update flag
	       flag = 0;
	       break;
	    }
	    // Update
	    temp =temp->link;
	 }
      }
      // If head[index] == NULL then it is empty or the word is not present
      if(flag)
	 // Funtion call to insert new node
	 insert_at_last_main(&head[index],word);
   }
   printf("SUCCESSFUL : Creation of database for file is completed\n");
   return SUCCESSFUL;
}



// Funtion to insert new node
int insert_at_last_main(main_node_t **head, char *word)
{
   // Create new node dynamcically
   main_node_t *new = malloc(sizeof(main_node_t));
   // Check if node created
   if(new == NULL)
      return FAILURE;
   // Update word,file count
   new->file_count =1;
   strcpy(new->word, word);
   // Update the links
   new->sub_link = NULL;
   new->link = NULL;
   // Check if list empty
   if(*head == NULL)
   {
      // Insert new main_node
      *head = new;
      return SUCCESS;
   }
   // If list non empty create a temp variable
   main_node_t *temp = *head;
   // TRaverse till last node
   while(temp->link)
   {
      temp = temp->link;
   }
   // Establish link
   temp->link = new;
   return SUCCESS;
}


// To update the sub node
int update_sub_node(main_node_t **main_node)
{
   // Create a new sub nodee
   sub_node_t *new_sub;
   // Allocate memory for new sub node
   //Update word count,filename,link = NULL
   
   // Update sub link of main node
   main_node->sub_link = new_sub;
}


// Funtion to update the word count in main node
int update_word_count(main_node_t **head, char file_name)
{
   sub_node_t *sub_temp = (*head)->sub_link;
   // Traverse till last sub node
   //Compare if the file is same
   //Incremenet and update word count 
   // Create subnode and update word and file count and link with NULL
   // Establish the link netween previous sub node and new sub node
   return SUCCESS;
}
