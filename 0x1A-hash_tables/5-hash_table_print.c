#include "hash_tables.h"
/**
 * hash_table_print - print hash table
 * @ht: pointer to hash table.
*/
void hash_table_print(const hash_table_t *ht)
{
unsigned int i;
hash_node_t *node;
int flag;
flag = 0;
if (ht == NULL)
return;
printf("{");
for (i = 0; i < ht->size; i++)
{
if (ht->array[i])
{
if (flag)
printf(", ");
node = ht->array[i];

while (node)
{
printf("'%s': '%s'", node->key, node->value);
node = node->next;
if (node != NULL)
printf(", ");
}
flag = 1;
}
}
printf("}\n");
}
