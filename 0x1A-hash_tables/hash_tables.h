#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - The Node of a hash table
 * @key: Denotes The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - The Hash table data structure
 * @size: The size of the array
 * @array: An array of size @size
 * Every cell of this array  points to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/**
 * struct shash_node_s - The Node of a sorted hash table
 * @key: Denotes The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: denotes a pointer to the next node of the List
 * @sprev: denotes a pointer to the previous element of the sorted linked list
 * @snext: denotes a pointer to the next element of the sorted linked list
 */

/*Defines the hashtable item*/
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - A Sorted hash table data structure
 * @size: size of the array
 * @array: array of size denoted by @size
 * Every cell of this array points to the first node of a linked list,
 * because we want our HashTable to handle collision using the Chaining method
 * @shead: denotes a pointer to the first element of the sorted linked list
 * @stail: denotes a pointer to the last element of the sorted linked list
 */

/*Contains an array of pointers to items*/
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

/*Defining the hash table*/
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

#endif
