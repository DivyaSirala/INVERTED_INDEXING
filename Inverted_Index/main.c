/*
 * Name 	: Nithya M
 * Date 	:
 * Description 	:
 * Input 	:
 * Output 	:
 */

#include "invertedIndex.h"

int main(int argc, char *argv[])
{

    char word[NAMELENGTH];
    file_node_t *file_head = NULL;

    main_node_t *hash_table_head[27];
    /* Check CLA passed or not */
    if (argc == 1)
    {
	printf("Error : Invalid no.of arguments\nUsage : ./inverted_search  <file1> <file2> ...\n");
	return FAILURE;
    }

    /* Check the files are valid */
    validate_n_store_filenames(&file_head, argv);

    /* If no files are valid then print error */
    if (file_head == NULL)
    {
	printf("Error : No files are valid\nPlease pass valid files\n");
	return FAILURE;
    }

    /* display the menu and read the choice */
    /* 1. Create Database 
       2. Display Database 
       3. Update Database 
       4. Search Database
       5. Save Database */

    /* Switch case */
    /*1 . Create_DB */

    Create_DB(file_head, hash_table_head);

    /*2. Display DB */
    display_DB(hash_table_head);

    /*3. Update Database */
    update_DB(&file_head, hash_table_head);

    /*4. Search database */
    printf("Enter the word to be searched in the database : ");
    scanf("%s", word);

    int index = tolower(word[0]) % 97;
    if (index > 25)
	index = 26;
    search_DB(hash_table_head[index], word);

    /*5. Save database */
    printf("Enter the backup filename : ");
    scanf("%s", fname);

    save_DB(hash_table_head, fname);
}

