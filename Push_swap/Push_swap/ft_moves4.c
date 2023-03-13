/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:06:08 by lde-mich          #+#    #+#             */
/*   Updated: 2023/03/13 17:39:02 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack)
{
	int	i;
	int	temp;

	if (!stack->size_a)
		return ;
	i = stack->size_a - 1;
	temp = stack->stack_a[i];
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[i] = temp;
	write(1, "rra\n", 4);
}

void	rrb(t_stack *stack)
{
	int	i;
	int	temp;

	if (!stack->size_b)
		return ;
	i = stack->size_b - 1;
	temp = stack->stack_b[i];
	while (i > 0)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[i] = temp;
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *stack)
{
	rra(stack);
	rrb(stack);
}
