#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: pointer to hash table.
 * @key: key
 * Return: value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
int index;
hash_node_t *node;
if (ht == NULL || key == NULL || *key == '\0')
return (NULL);
index = key_index((unsigned char *)key, ht->size);
node = ht->array[index];

while (node != NULL)
{
if (strcmp(node->key, key) == 0)
return (node->value);
node = node->next;
}
return (NULL);
}
