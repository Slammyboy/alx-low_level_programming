	return (NULL);
}

/**
 * shash_table_print - function to print sorted hash table in alphanumeric
 * order.
 * @ht: pointer to sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	char many = 0;

	if (ht == NULL)
		return;
	putchar('{');
	node = ht->shead;
	while (node)
	{
		if (many)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		many = 1;
		node = node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - function to print sorted hash table in
 * reverse alphanumeric order.
 * @ht: pointer to sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	char many = 0;

	if (ht == NULL)
		return;
	putchar('{');
	node = ht->stail;
	while (node)
	{
		if (many)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		many = 1;
		node = node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - function to free hash table
 * @ht: pointer to sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *head, *next;

	if (ht == NULL || ht->array == NULL)
		return;
	head = ht->shead;
	while (head)
	{
		next = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = next;
	}
	free(ht->array);
	free(ht);
}
