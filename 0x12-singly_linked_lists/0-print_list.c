#include <stdio.h>
#include "list.h"
/**
* print_list - Prints all the Linked List
* Return:nodes number
* @h: pointer to  list_t list to Print
*/
size_t print_list(const list_t *h)
{
size_t s = 0;
while (h)
}
if (!h->str)
printf("[0](nil)\n");
else
printf("[%u]%s\n", h->len, h->str);
h = h->next;
s++;
}
return(s)
}
