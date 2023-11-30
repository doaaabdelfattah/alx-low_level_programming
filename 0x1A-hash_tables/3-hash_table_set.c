#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: pointer to hash table
 * @key: key
 * @value: value
 * Return: 1 if succeed
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new_node;
unsigned long int index;

/* Compute the index */
index = key_index((unsigned char *)key, ht->size);
/* Check if the key already exists */

if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
{
    /* free existing value */
    free(ht->array[index]->value);
    /* duplicate at assign it to the node */
    ht->array[index]->value = strdup(value);
    if (ht->array[index]->value == NULL)
    {
        return (0);
    }
    return (1);
}

/* Create the node of new element */
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
return (0);
}

/* Duplicate key & value */
new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = NULL;

if (new_node->key == NULL || new_node->value == NULL)
{
    free(new_node->key);
    free(new_node->value);
    free(new_node);
    return (0);
}

/*  CASE I: If No collision */
if (ht->array[index] == NULL)
{
ht->array[index] = new_node;
}
/* CASE II: if Collision, add at the beginning */
else
{
new_node->next = ht->array[index];
ht->array[index] = new_node;

/* Free the memory of the previous node 
free(tmp->key);
free(tmp->value);
free(tmp);
*/
}
return (1);
}
