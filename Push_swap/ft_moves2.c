/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:48:24 by lde-mich          #+#    #+#             */
/*   Updated: 2023/03/09 15:51:35 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *stack)
{
	int	i;

	i = stack->size_a;
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[0] = stack->stack_b[0];
	i = 0;
	stack->size_b -= 1;
	while (i < stack->size_b)
	{
		stack->stack_b[i] = stack->stack_b[i + 1];
		i++;
	}
	stack->stack_b[i] = 0;
	write(1, "pa\nA // B\n\n", 11);
}

void	pb(t_stack *stack)
{
	int	i;

	i = stack->size_b;
	while (i > 0)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[0] = stack->stack_a[0];
	i = 0;
	stack->size_a -= 1;
	while (i < stack->size_a)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	stack->stack_a[i] = 0;
	write(1, "pb\nA // B\n\n", 11);
}
