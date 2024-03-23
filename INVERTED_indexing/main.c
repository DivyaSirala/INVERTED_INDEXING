/*
NAME : DIVYA SIRALA
DATE : 18/07/2021
DESCRIPTION : To perform Inverted Search into a database using the method of INVERTED INDEXING and perform the following Operations :
	    1. Create Database
	    2. Display Database
	    3. Search Database
	    4. Update Database
	    5. Save Database
INPUT : File names passed as Command Line Arguments
OUTPUT : The above mentioned operations are performed in the database of the files
*/

// Including header
#include"Inverted_Index.h"

// Main Function reading CLAs
int main(int argc,char *argv[])
{
   // Variable declaration
   char word[NAME_LENGTH];
   int choice;
   // To save the list of file names
   file_node_t **file_head = NULL;
   // Linked list array of heads , here NULL means list is empty
   main_node_t *hash_table_head[27] = NULL;
   // Check if CLAs passed or not
   if(argc ==1)
   {
      printf("ERROR : Invalid no. of arguments\n USAGE : ./inverted_search <file1> <file2> ....\n");
      return FAILURE;
   }
   // Check if files are valid or not
   validate_and_store_filenames(&file_head,argv);
   // If no files are valid then print error
   do
   {
      if(file_head == NULL)
      {
	 printf("ERROR : No filws are valid.\n Please pass valid files\n");
	 return FAILURE;
      }
      // Display menu
      printf("1. Create Database\n2. Display Database\n3. Search Database\n4. Update Database\n5. Save Database\n");
      printf("Enter your choice : ");
      scanf("%d",&chooice);
      // Switch case for multiple cases
      switch(choice)
      {
	 case 1 : //Create Database
		  ret = create_database(file_head,&head);
		  (ret == SUCCESS) ? printf("Database created successfully\n") : printf("Error in creating Database\n");
		  break;
	 case 2 : // Display database
		  display_database(hash_table_head);
		  break;
	 case 3 : // Search element in Database
		  printf("Enter the element to be searched in the Database : ");
		  scanf("%s",word);
		  int index = tolower(word[0] %97);
		  if(index > 25)
		     index = 26;
		  search_database(hash_table_head[index],word);
		  break;
	 case 4 : // Update Database
		  update_database(file_head,hash_table_head);
		  break;
	 case 5 : // Save Database
		  printf("Enter the backup filename : ");
		  scanf("%s",file_name);
		  save_database(hash_table_head, file_name);

		  break;
	 default : printf("ERROR : Enter a Valid choice !!\n");
      }
      __fpurge(stdin);
      // Check for continue condition
      printf("Do you want to continue ? (yY/nN) : ");
      scanf("%c",&ch);
   }
   // Run the loop till user wants to continue
   while(ch=='y' || ch == 'Y');
   return 0;
}

