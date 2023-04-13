#include "list.h"

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list *current = lst;
    int tmp;

    while (current != NULL)
    {
        t_list *next = current->next;
        while (next != NULL)
        {
            if ((*cmp)(current->data, next->data) == 0)
            {
                tmp = current->data;
                current->data = next->data;
                next->data = tmp;
            }
            next = next->next;
        }
        current = current->next;
    }

    return lst;
}

