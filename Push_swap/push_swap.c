/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:48:55 by lde-mich          #+#    #+#             */
/*   Updated: 2023/03/06 09:52:00 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(void)
{
	t_stack	**stack;
	t_stack	*e1;
	t_stack	*e2;
	t_stack	*e3;
	t_stack	**stack2;
	t_stack	*e12;
	t_stack	*e22;
	t_stack	*e32;

	stack = (t_stack **)malloc(sizeof(t_stack *));
	e1 = (t_stack *)malloc(sizeof(t_stack));
	e2 = (t_stack *)malloc(sizeof(t_stack));
	e3 = (t_stack *)malloc(sizeof(t_stack));
	e1->num = 1;
	*stack = 0;
	e1->num = 1;
	e2->num = 2;
	e3->num = 3;
	add_front_stack(stack, e1);
	add_front_stack(stack, e2);
	add_front_stack(stack, e3);
	stack2 = (t_stack **)malloc(sizeof(t_stack *));
	e12 = (t_stack *)malloc(sizeof(t_stack));
	e22 = (t_stack *)malloc(sizeof(t_stack));
	e32 = (t_stack *)malloc(sizeof(t_stack));
	e12->num = 1;
	*stack2 = 0;
	e12->num = 1;
	e22->num = 2;
	e32->num = 3;
	add_front_stack(stack2, e12);
	add_front_stack(stack2, e22);
	add_front_stack(stack2, e32);
	print_list(*stack);
	//print_list(*stack2);
	rrb(stack);
	print_list(*stack);
	//*print_list(*stack2);
	free(e1);
	free(e2);
	free(e3);
	free(stack);
	free(e12);
	free(e22);
	free(e32);
	free(stack2);
}