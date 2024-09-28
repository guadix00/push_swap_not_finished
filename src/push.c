/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:31:05 by gualvare          #+#    #+#             */
/*   Updated: 2024/09/26 17:31:11 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_b(Node **stack_a, Node **stack_b, int print)
{
    if (!*stack_a)
    return ;
    Node *push_head;

    push_head = *stack_a;
    *stack_a = push_head->next;
    push_head->next = *stack_b;
    *stack_b = push_head;
    if (print)
        write(1, "pb\n", 3);
}
void push_a(Node **stack_a, Node **stack_b, int print)
{
    if (!*stack_b)
        return ;
    Node *push_head;

    push_head = *stack_b;
    *stack_b = push_head->next;
    push_head->next = *stack_a;
    *stack_a = push_head;
    if (print)
        write(1, "pa\n", 3);
}
