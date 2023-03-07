/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:48:33 by lde-mich          #+#    #+#             */
/*   Updated: 2023/03/07 17:27:59 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_size_count(int argc, char **argv, t_stack *stack)
{
	int		i;
	int		j;
	char	*temp;
	char	**temp1;

	i = 1;
	while (i < argc)
	{
		temp = ft_strjoin(temp, argv[i]);
		temp = ft_strjoin(temp, " ");
		i++;
	}
	temp1 = ft_split(temp, 32);
	stack->size_a = i - 1;
	stack->stack_a = (int *) malloc (stack->size_a * sizeof(int));
	j = 0;
	while (temp1[j])
	{
		if (ft_atoi(temp1[j]) == 0)
			exit(write(1, "Error\nInvaliD input", 19));
		stack->stack_a[j] = ft_atoi(temp1[j]);
		j++;
	}
}
