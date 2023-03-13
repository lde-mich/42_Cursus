/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:48:55 by lde-mich          #+#    #+#             */
/*   Updated: 2023/03/13 17:39:32 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_put_all(t_stack *stack)
{
	while (stack->size_a > 3)
		pb(stack);
}

void	ft_empty_b(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size_a)
		stack->stack_b[i++] = 0;
}

int	main(int argc, char **argv)
{
	t_stack	stack;

	if (argc <= 1)
		exit(write(1, "Error\nInvalid input\n", 20));
	ft_size_count(argc, argv, &stack);
	stack.size_b = 0;
	stack.stack_b = (int *) malloc (stack.size_a * sizeof(int));
	ft_empty_b(&stack);
	ft_num_stack(&stack);
	ft_sort(&stack);
	ft_empty_stack_a(&stack);
	write(1, "\n", 1);
	ft_put_all(&stack);
	ft_print_stack(&stack);
	rrr(&stack);
	ft_print_stack(&stack);
}
