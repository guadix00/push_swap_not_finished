#include "push_swap.h"

void ss(Node **stack_a, Node **stack_b, int print)
{
    if (stack_a && *stack_a && (*stack_a)->next) {
        swap_a(stack_a, 0);
    }
    if (stack_b && *stack_b && (*stack_b)->next) {
        swap_b(stack_b, 0);
    }
    if (print)
        write(1, "ss\n", 3);
}

void reverse_rotate_both(Node **stack_a, Node **stack_b, int print)
{
    reverse_rotate_a(stack_a, 0);
    reverse_rotate_b(stack_b, 0);
    if (print)
        write(1, "rrr\n", 4);
}

void rotate_both(Node **stack_a, Node **stack_b, int print)
{
    rotate_a(stack_a, 0);
    rotate_b(stack_b, 0);
    if (print)
        write(1, "rr\n", 4);
}