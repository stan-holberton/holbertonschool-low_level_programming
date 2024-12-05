#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodes - Add nodes to the list.
 * @head: Pointer to the head of the doubly linked list.
 */
void add_nodes(dlistint_t **head)
{
	add_dnodeint_end(head, 0);
	add_dnodeint_end(head, 1);
	add_dnodeint_end(head, 2);
	add_dnodeint_end(head, 3);
	add_dnodeint_end(head, 4);
	add_dnodeint_end(head, 98);
	add_dnodeint_end(head, 402);
	add_dnodeint_end(head, 1024);
}

/**
 * delete_and_print - Delete node at index and print the list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: The index of the node to delete.
 */
void delete_and_print(dlistint_t **head, int index)
{
	delete_dnodeint_at_index(head, index);
	print_dlistint(*head);
	printf("-----------------\n");
}

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head = NULL;

	add_nodes(&head);
	print_dlistint(head);
	printf("-----------------\n");

	delete_and_print(&head, 5);
	delete_and_print(&head, 0);
	delete_and_print(&head, 0);
	delete_and_print(&head, 0);
	delete_and_print(&head, 0);
	delete_and_print(&head, 0);
	delete_and_print(&head, 0);
	delete_and_print(&head, 0);
	delete_and_print(&head, 0);
	delete_and_print(&head, 0);
	delete_and_print(&head, 0);
	delete_and_print(&head, 0);
	delete_and_print(&head, 0);
	delete_and_print(&head, 0);

	print_dlistint(head);

	return (0);
}
