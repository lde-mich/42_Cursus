/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:28:41 by lde-mich          #+#    #+#             */
/*   Updated: 2023/03/03 18:28:45 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **stack)
{
	(*stack) = stack_last(*stack);
	ft_printf("rra\n");
}

void	rrb(t_stack **stack)
{
	(*stack) = stack_last(*stack);
	ft_printf("rrb\n");
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	(*stack_a) = stack_last(*stack_a);
	(*stack_b) = stack_last(*stack_b);
	ft_printf("rrr\n");
}
