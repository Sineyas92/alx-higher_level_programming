#include "lists.h"

/**
 * check_cycle - function in C that checks
 * if a singly linked list has a cycle in it.
 * @list: linked list
 *
 *Return: if there is cycle 1, else 0
 */
int check_cycle(listint_t *list)
{
	listint_t *current, *after;

	if (list == NULL)
		return (0);

	current = list;
	after = list->next;

	while (after != NULL && after->next != NULL)
	{
		if (after == current)
			return (1);

		current = current->next;
		after = after->next->next;
	}
	return (0);

}
