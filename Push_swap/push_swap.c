/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:48:55 by lde-mich          #+#    #+#             */
/*   Updated: 2023/03/07 17:37:52 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack;
	int		i;

	if (argc <= 1)
		exit(write(1, "Error\nInvalid input", 19));
	ft_size_count(argc, argv, &stack);
	stack.stack_b = (int *) malloc (stack.size_a * sizeof(int));
	i = 0;
	while (i < stack.size_a)
	{
		printf("%d\n", stack.stack_a[i]);
		i++;
	}
	sa(&stack);
	i = 0;
	while (i < stack.size_a)
	{
		printf("%d\n", stack.stack_a[i]);
		i++;
	}
}
