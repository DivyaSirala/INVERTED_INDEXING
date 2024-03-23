#ifndef DATA_BASE
#define DATA_BASE

// Including header
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"colors.h" // For displaying colors

// Macros used for Return values
#define SUCCESS 0
#define FAILURE -1
#define NON_EMPTY -2
#define EMPTY_LIST -3
#define REPEATED -4
#define FILE_EMPTY -5
#define NOT_PRESENT -6

// MACROS
#define SIZE 27
#define BUFF_SIZE 255
#define NAME_LENGTH 20

/* Structures */
 
// SUB NODE Structure 
typedef struct sub_node
{
   // Array for storing thr file names
   char file_name[NAME_LENGTH];
   int word_count;
   struct sub_node *link;
}sub_node_t;

// MAIN NODE Structure
typedef struct main_node
{
   // Array for stroring the word in the file
   char word[NAME_LENGTH];
   struct node *link;
   // For the link to the sub nodes
   sub_node_t *sub_link;
   int file_count;
}main_node_t;

// File node structure used to store the filenames
typedef struct file_node
{
    char file_name[NAME_LENGTH];
    struct file_node *link;
}file_node_t;


/*Functions prototypes*/


/*Functions for validating the files*/
// To Validate file and store the name
void validate_and_store_filenames(file_node_t **,char *filenames*[]);
// Checck if File Valid
int IsFileValid(char *);
// To strore filename to the linked list
int store_filenames_to_list(char *file_name, file_node_t **head);


/*Functions for Creating Database*/
//To create database
int create_database(file_node_t *file_head, main_node_t **head);
// To read data file word by word
int read_data_file(file_node_t *,main_node_t **,char *file_name);
//To insert data at last of main node
int insert_at_last_main(main_node_t **head, char *word);
//To Update the values of SUB NODE
int update_sub_node(main_node_t **main_node);
// To update word count of main node
int update_word_count(main_node_t **head,char *file_name);


/*Function to Display database*/
int display_database(main_node_t **head);

/*Function to Update database*/
int update_database(file_node_t **,main_node_t **);

/*Function to Search data in Database*/
int search_database(main_node_t *head, char *word);

/*Funtion to Save Database*/
int save_database(main_node_t **head, char *file_name);

#endif
