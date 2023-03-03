/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:27:59 by lde-mich          #+#    #+#             */
/*   Updated: 2023/03/03 18:28:05 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_last(t_stack *stack)
{
	t_stack	*tmp;

	if (!stack)
		return (0);
	tmp = stack;
	while (tmp->next != stack)
		tmp = tmp->next;
	return (tmp);
}

int	stack_size(t_stack *stack)
{
	int		i;
	t_stack	*tmp;

	if (!stack)
		return (0);
	i = 1;
	tmp = stack;
	while (tmp->next != stack)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

void	add_back_stack(t_stack **stack, t_stack *new)
{
	t_stack	*e1;
	t_stack	*e2;

	if (!new)
		return ;
	if (!(*stack))
	{
		*stack = new;
		new->next = new;
	}
	e2 = stack_last(*stack);
	e1 = *stack;
	*stack = new;
	(*stack)->next = e1;
	e2->next = *stack;
}

void	add_front_stack(t_stack **stack, t_stack *new)
{
	t_stack	*tmp;

	if (!new)
		return ;
	if (!(*stack))
	{
		*stack = new;
		(*stack)->next = new;
	}
	tmp = stack_last(*stack);
	tmp->next = new;
	new->next = *stack;
}
