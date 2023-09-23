#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *y)
{
	size_t s = 0;

	while (y)
	{
		if (!y->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", y->len, y->str);
		y = y->next;
		s++;
	}

	return (s);
}
