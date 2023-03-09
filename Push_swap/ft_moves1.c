/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:48:14 by lde-mich          #+#    #+#             */
/*   Updated: 2023/03/09 13:17:57 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack)
{
	int	temp;

	temp = stack->stack_a[0];
	stack->stack_a[0] = stack->stack_a[1];
	stack->stack_a[1] = temp;
	write(1, "sa\nA // B\n\n", 11);
}

void	sb(t_stack *stack)
{
	int	temp;

	temp = stack->stack_b[0];
	stack->stack_b[0] = stack->stack_b[1];
	stack->stack_b[1] = temp;
	write(1, "sb\nA // B\n\n", 11);
}

void	ss(t_stack *stack)
{
	int	temp;

	temp = stack->stack_a[0];
	stack->stack_a[0] = stack->stack_a[1];
	stack->stack_a[1] = temp;
	temp = stack->stack_b[0];
	stack->stack_b[0] = stack->stack_b[1];
	stack->stack_b[1] = temp;
	write(1, "ss\nA // B\n\n", 11);
}
