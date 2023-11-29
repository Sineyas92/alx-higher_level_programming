#include "stdio.h"
#include "stdlib.h"
#include "lists.h"

/**
* insert_node - inserts a number into a sorted singly linked list
* @head: pointer to head of list
* @number: number to insert
* Return: address of new element, or NULL if it failed
*/
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new;
	listint_t *current;
	listint_t *previous;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	new->next = NULL;
	if (*head == NULL)
		return (new);
	current = *head;
	previous = NULL;
	while (current != NULL && current->n < number)
	{
		previous = current;
		current = current->next;
	}
	if (current == *head)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = current;
		previous->next = new;
	}
	return (new);
}
