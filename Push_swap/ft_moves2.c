/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:48:24 by lde-mich          #+#    #+#             */
/*   Updated: 2023/03/06 09:51:36 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **stack)
{
	*stack = (*stack)->next;
	ft_printf("ra\n");
}

void	rb(t_stack **stack)
{
	(*stack) = (*stack)->next;
	ft_printf("rb\n");
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	(*stack_a) = (*stack_a)->next;
	(*stack_b) = (*stack_b)->next;
	ft_printf("rr\n");
}

void	print_list(t_stack *stack)
{
	t_stack	*e1;

	if (!stack)
		return ;
	e1 = stack;
	while (stack->next != e1)
	{
		ft_printf("%d\n", stack->num);
		stack = stack->next;
	}
	ft_printf("%d\n", stack->num);
}
