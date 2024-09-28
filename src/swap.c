/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:31:18 by gualvare          #+#    #+#             */
/*   Updated: 2024/09/26 17:31:20 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_a(Node **stack_a, int print)
{
    Node *first_position;
    Node *second_position;

    first_position = *stack_a;
    second_position = first_position->next;
    first_position->next = second_position->next;
    second_position->next = first_position;
    *stack_a = second_position;
    if (print)
        write(1, "sa\n", 3);
}

void swap_b(Node **stack_b, int print)
{
    Node *first_position;
    Node *second_position;

    first_position = *stack_b;
    second_position = first_position->next;
    first_position->next = second_position->next;
    second_position->next = first_position;
    *stack_b = second_position;
    if (print)
        write(1, "sb\n", 3);
}


