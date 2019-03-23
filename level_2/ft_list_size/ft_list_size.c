#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

/* get rid of main to submit it as a function */

int     ft_list_size(t_list *begin_list)
{
    t_list *current;
    int count;

    count = 0;
    current = begin_list;
    while (current)
    {
        current = current->next;
        count++;
    }
    printf("%d\n", count);
    return (count);
}

int     main()
{
    t_list *head;
    t_list *body_1;
    t_list *body_2;
    t_list *tail;
    int a, b, c, d;

    a = 1;
    b = 2;
    c = 3;
    d = 4;
    head = malloc(sizeof(t_list));
    body_1 = malloc(sizeof(t_list));
    body_2 = malloc(sizeof(t_list));
    tail = malloc(sizeof(t_list));

    head->data = &a;
    head->next = body_1;
    body_1->data = &b;
    body_1->next = body_2;
    body_2->data = &c;
    body_2->next = tail;
    tail->data = &d;
    tail->next = NULL;
    ft_list_size(head);
}