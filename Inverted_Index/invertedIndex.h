#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "colors.h"

#define SUCCESS 0
#define FAILURE -1
#define NOELEMENT -2
#define EMPTYLIST -3
#define REPEATED -4
#define FILE_EMPTY -5
#define NOT_PRESENT -6

#define SIZE 27
#define BUFF_SIZE 255
#define NAMELENGTH 20

//inverted table

/* subnode structue */
typedef struct sub_node
{
	char f_name[NAMELENGTH];
	int w_count;
	struct sub_node *link;
}sub_node_t;

/* main node structure*/
typedef struct node
{
	char word[NAMELENGTH];
	struct node *link;
	sub_node_t *sub_link;
	int f_count;
}main_node_t;

/* file node structure (Lineked list used to store the filenames */
typedef struct file_node
{
    char f_name[NAMELENGTH];
    struct file_node *link;
}file_node_t;

/* validating files */
void validate_n_store_filenames(file_node_t **, char *filenames[]);
int IsFileValid(char *);
int store_filenames_to_list(char *f_name, file_node_t **head);

/* Create Database */
int create_DB(file_node_t *file_head, main_node_t **head);
int read_datafile(char *f_name, main_node_t **);
int insert_at_last_main(main_node_t **head, char *word);
int update_sub_node(main_node_t **main_node);
int update_word_count(main_node_t **head, char *fname;);

/* Display database */
int display_DB(main_node_t **head);

/* Update database */
int update_DB(file_node_t **, main_node_t **);

/* Search Database */
int search_DB(main_node_t *head, char *word);

/* Save Database */
int save_DB(main_node_t **head, char *fname);
