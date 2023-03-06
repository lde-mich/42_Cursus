/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:48:14 by lde-mich          #+#    #+#             */
/*   Updated: 2023/03/06 09:51:07 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **stack)
{
	t_stack	*e1;
	t_stack	*e2;
	t_stack	*e3;

	e3 = stack_last(*stack);
	e1 = *stack;
	e2 = (*stack)->next;
	*stack = e2;
	e1->next = e2->next;
	e2->next = e1;
	e3->next = e2;
	ft_printf("sa\n");
}

void	sb(t_stack **stack)
{
	t_stack	*e1;
	t_stack	*e2;
	t_stack	*e3;

	e3 = stack_last(*stack);
	e1 = *stack;
	e2 = (*stack)->next;
	*stack = e2;
	e1->next = e2->next;
	e2->next = e1;
	e3->next = e2;
	ft_printf("sb\n");
}

void	ss(t_stack **stack_a, t_stack **stack)
{
	t_stack	*e1;
	t_stack	*e2;
	t_stack	*e3;

	e3 = stack_last(*stack_a);
	e1 = *stack_a;
	e2 = (*stack_a)->next;
	*stack_a = e2;
	e1->next = e2->next;
	e2->next = e1;
	e3->next = e2;
	e3 = stack_last(*stack);
	e1 = *stack;
	e2 = (*stack)->next;
	*stack = e2;
	e1->next = e2->next;
	e2->next = e1;
	e3->next = e2;
	ft_printf("ss\n");
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*eb;

	eb = *stack_b;
	stack_last(*stack_b)->next = eb->next;
	(*stack_b) = (*stack_b)->next;
	add_back_stack(stack_a, eb);
	ft_printf("pa\n");
}

void	pb(t_stack **stack_b, t_stack **stack_a)
{
	t_stack	*eb;

	eb = *stack_b;
	stack_last(*stack_b)->next = eb->next;
	(*stack_b) = (*stack_b)->next;
	add_back_stack(stack_a, eb);
	ft_printf("pb\n");
}
