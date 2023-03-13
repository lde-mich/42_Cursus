/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:48:33 by lde-mich          #+#    #+#             */
/*   Updated: 2023/03/13 16:03:07 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack)
{
	int	i;
	int	temp;

	if (!stack->size_a)
		return ;
	i = 0;
	temp = stack->stack_a[0];
	while (i < stack->size_a - 1)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	stack->stack_a[i] = temp;
	write(1, "ra\n", 3);
}

void	rb(t_stack *stack)
{
	int	i;
	int	temp;

	if (!stack->size_b)
		return ;
	i = 0;
	temp = stack->stack_b[0];
	while (i < stack->size_b - 1)
	{
		stack->stack_b[i] = stack->stack_b[i + 1];
		i++;
	}
	stack->stack_b[i] = temp;
	write(1, "rb\n", 3);
}

void	rr(t_stack *stack)
{
	ra(stack);
	rb(stack);
}
