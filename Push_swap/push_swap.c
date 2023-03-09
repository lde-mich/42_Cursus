/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:48:55 by lde-mich          #+#    #+#             */
/*   Updated: 2023/03/09 16:05:32 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_put_all(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size_a - 3)
	{
		pa(stack);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stack	stack;
	int		i;

	if (argc <= 1)
		exit(write(1, "Error\nInvalid input", 19));
	ft_size_count(argc, argv, &stack);
	stack.size_b = stack.size_a;
	stack.stack_b = (int *) malloc (stack.size_a * sizeof(int));
	ft_num_stack(&stack);
	ft_sort(&stack);
	ft_empty_stack_a(&stack);
	//ft_put_all(&stack);
	printf("\n");
	i = 0;
	while (i < stack.size_a)
	{
		printf("%d __ %d\n", stack.stack_a[i], stack.stack_b[i]);
		i++;
	}
}
