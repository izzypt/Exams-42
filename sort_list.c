#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int swapped = 1;
    t_list *ptr1;
    t_list *lptr = NULL;
 
    /* Checking for empty list */
    if (lst == NULL)
        return (NULL);
 
    while (swapped)
    {
        swapped = 0;
        ptr1 = lst;
 
        while (ptr1->next != lptr)
        {
            if (cmp(ptr1->data, ptr1->next->data))
            {
                int temp = ptr1->data;
                ptr1->data = ptr1->next->data;
                ptr1->next->data = temp;
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    }
    
    return (lst);
}
