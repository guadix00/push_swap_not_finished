/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:31:37 by gualvare          #+#    #+#             */
/*   Updated: 2024/09/26 17:31:38 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
    #define PUSH_SWAP_H
# include "../libft/libft.h"
# include "../libft/ft_printf.h"
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct node
{
    int content;
    struct node *next;
} Node;

Node *init_node(Node **stack_a, int value);
Node *find_last(Node *stack_a);
void push_b(Node **stack_a, Node **stack_b, int print);
void push_a(Node **stack_a, Node **stack_b, int print);
void swap_a(Node **stack_a, int print);
void swap_b(Node **stack_b, int print);
void ss(Node **stack_a, Node **stack_b, int print);
void rotate_a(Node **stack_a, int print);
void rotate_b(Node **stack_b, int print);
void reverse_rotate_a(Node **stack_a, int print);
void reverse_rotate_b(Node **stack_b, int print);
void reverse_rotate_both(Node **stack_a, Node **stack_b, int print);
void rotate_both(Node **stack_a, Node **stack_b, int print);
Node *find_prev(Node *stack_a);
int is_sorted(Node **stack_a);
long    ft_atol(char *str);
int is_int(char **argv);
void sort_three(Node **stack_a);
Node *find_smallest(Node **stack_a);
void sort_four(Node **stack_a, Node **stack_b);
void sort_five(Node **stack_a, Node **stack_b);
Node *sort_stack(Node **stack_a, Node **stack_b, int count);
void sort_large_stack(Node **stack_a, Node **stack_b);

#endif
