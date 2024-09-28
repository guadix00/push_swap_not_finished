#include "push_swap.h"



void reverse_rotate_b(Node **stack_b, int print)
{
    Node *first;
    Node *last;
    Node *prev_last;

    first = *stack_b;
    last = find_last(*stack_b);
    prev_last = find_prev(*stack_b);

    *stack_b = last;
    last->next = first;
    prev_last->next = NULL;
    if (print)
        write(1, "rrb\n", 4);
}

void reverse_rotate_a(Node **stack_a, int print)
{
    Node *first;
    Node *last;
    Node *prev_last;

    first = *stack_a;
    last = find_last(*stack_a);
    prev_last = find_prev(*stack_a);

    *stack_a = last;
    last->next = first;
    prev_last->next = NULL;
    if (print)
         write(1, "rra\n", 4);
}

void rotate_b(Node **stack_b, int print)
{
    Node *first;
    Node *last;

    first = *stack_b;
    last = find_last(*stack_b);
    *stack_b = first->next;
    last->next = first;
    first->next = NULL;
    if (print)
        write(1, "rb\n", 3);
}

void rotate_a(Node **stack_a, int print)
{
    Node *first;
    Node *last;

   // if (!*stack_a || !stack_a || !(*stack_a)->next)
    //    return ;
    first = *stack_a;
    last = find_last(*stack_a);
    *stack_a = first->next;
    last->next = first;
    first->next = NULL;
    if (print)
        write(1, "ra\n", 3);
}
