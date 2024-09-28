/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:35:54 by gualvare          #+#    #+#             */
/*   Updated: 2024/09/27 14:35:56 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int is_sorted(Node **stack_a)
{
    Node *current;

    current = *stack_a;

    if (!current)
        return (1);
    while (current->next)
    {
        if (current->content > current->next->content)
            return (0);
        else
            current = current->next;
    }
    return (1);
}

int is_int(char **argv)
{
    int i;
    i = 1;
    while (argv[i])
    {
        if (ft_atol(argv[i]) > INT_MAX || ft_atol(argv[i]) < INT_MIN)
                  return (0);
        i++;
    }
    return (1);
}