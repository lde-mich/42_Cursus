/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:49:13 by lde-mich          #+#    #+#             */
/*   Updated: 2023/03/09 15:59:23 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>
# include <fcntl.h>

typedef struct s_stack
{
	int	*stack_a;
	int	*stack_b;
	int	*num;
	int	size_a;
	int	size_b;

}	t_stack;

int		ft_atoi(const char *str);
int		ft_strlen(const char *str);
void	ft_size_count(int argc, char **argv, t_stack *stack);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_word(const char *s, char c);
void	ft_while(char **final, const char *s, char c);
char	**ft_split(char const *s, char c);
void	ft_put_all(t_stack *stack);
void	ft_sort(t_stack *stack);
void	ft_num_stack(t_stack *stack);
void	ft_empty_stack_a(t_stack *stack);
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);
void	pa(t_stack *stack);
void	pb(t_stack *stack);

#endif