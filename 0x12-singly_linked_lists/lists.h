#ifndef LISTS_H
#define LISTS_H

/**
* @next: next node pointer
* struct list_s-Singly Linked Lists
* Singly linked list node structure
* @len: StringLength
* @str: String-Malloc String
*/
typedef struct list_s
{
unsigned int len;
char *str;
struct list_s *next;
}
list_t;
size_t list_len(cont list_t *h);
void free_list(list_t *head);
list_t *add_node_end(list_t **head, const char *str);
size_t print_list(const list_t *h);
list_t *add_nodes(list_t **head, const char *str);
#endif
