#include "lists.h"
/**
 * add_node - adds a node at the beginning of a lists_t
 * @head: head of a liinked list
 * @str: String to store in the linked lists
 * Return: address of head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;
	new->len = nchar;
	new->next = *head;
	*head = new;

	return (*head);
}
