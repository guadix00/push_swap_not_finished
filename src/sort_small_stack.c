#include "push_swap.h"

Node *sort_stack(Node **stack_a, Node **stack_b, int count)
{
    if (count == 2)
        swap_a(stack_a, 1);
    if (count == 3)
        sort_three(stack_a);
    if (count == 4)
        sort_four(stack_a, stack_b);
    if (count == 5)
        sort_five(stack_a, stack_b);
    return (*stack_a);
}

void sort_five(Node **stack_a, Node **stack_b)
{
    Node *lowest_node;

    lowest_node = find_smallest(stack_a);

    while (*stack_a != lowest_node)
        reverse_rotate_a(stack_a, 1);
    push_b(stack_a, stack_b, 1);
    sort_four(stack_a, stack_b);
    push_a(stack_a, stack_b, 1);
}

void sort_four(Node **stack_a, Node **stack_b)
{
    Node *lowest_node;

    lowest_node = find_smallest(stack_a);
    while (*stack_a != lowest_node)
        reverse_rotate_a(stack_a, 1);
    push_b(stack_a, stack_b, 1);
    sort_three(stack_a);
    push_a(stack_a, stack_b, 1);
}

void sort_three(Node **stack_a)
{
    Node *current;
    int max_value;
    Node *max_node;

    current = *stack_a;
    max_value = INT_MIN;

    while (current)
    {
        if (current->content > max_value)
        {
            max_value = current->content;
            max_node = current;
        }
        current = current->next;
    }
    if (max_node == *stack_a)
        rotate_a(stack_a, 1);
    else if(max_node == (*stack_a)->next)
        reverse_rotate_a(stack_a, 1);
    if ((*stack_a)->content > (*stack_a)->next->content)
        swap_a(stack_a, 1);

}

void sort_large_stack(Node **stack_a, Node **stack_b)
{
        Node *smallest;
        smallest = find_smallest(stack_a);
    
    while (*stack_a) 
        {
            while (*stack_a != smallest) 
                rotate_a(stack_a, 1); 
        }
        push_b(stack_a, stack_b, 1);
    while (*stack_b) 
        push_a(stack_a, stack_b, 1);
}
