#ifndef LISTS_H
#define LISTS_H

/**
 * @str: string - (malloc'ed string)
 * struct list_s - singly linked list
 * @next: points to the next node
 * @len: length of the string
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	struct list_s *next;
        unsigned int len;
} list_t;

list_t *add_node_end(list_t **head, const char *str);
size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);
void free_list(list_t *head);
size_t list_len(const list_t *h);

#endif
