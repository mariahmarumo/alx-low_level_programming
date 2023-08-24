#include <stdlib.h>
#include "lists.h"
/**
 * list_len - element numbers are returned in the linked list
 * Return: mumbers in h
 */
size_t list_len(const list_t *h)
{
size_t n = 0;
while (h)
{
n++;
h = h->next;
return (n);
}
