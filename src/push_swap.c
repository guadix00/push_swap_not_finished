#include "push_swap.h"

int main(int argc, char **argv)
{
    Node *stack_a;
    Node *stack_b;
    Node *new_node;
    //Node *current;
    int count;

    count = 1;
    stack_a = NULL;
    stack_b = NULL;

    if (argc < 2)
    {
           ft_putstr_fd("Wrong number of arguments\n", 2); 
           return (1);
    }
    while (argv[count])
    {
            int num = ft_atoi(argv[count]);
            new_node = init_node(&stack_a, num);
            count++;
    }
    if (argc >= 3)
    {
        if (!is_sorted(&stack_a))
        {
            sort_stack(&stack_a, &stack_b, count - 1);
        }
        else
            printf("is already sorted\n");    
    }
    if (argc > 6)
      sort_large_stack(&stack_a, &stack_b);
    /*current = stack_a;
    while (current)
    {
        printf("large stack = %d\n", current->content);
        current = current->next;
    }*/
    
}