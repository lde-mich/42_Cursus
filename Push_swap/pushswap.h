/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:27:37 by lde-mich          #+#    #+#             */
/*   Updated: 2023/03/03 18:44:43 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
	int				num;
	struct s_stack	*next;

}	t_stack;

void	ra(t_stack **stack);
void	rb(t_stack **stack);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	print_list(t_stack *stack);
void	sb(t_stack **stack);
void	sa(t_stack **stack);
void	ss(t_stack **stack_a, t_stack **stack);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack);
void	rrb(t_stack **stack);
void	rrr(t_stack **stack_a, t_stack **stack_b);
t_stack	*stack_last(t_stack *stack);
int		stack_size(t_stack *stack);
void	add_back_stack(t_stack **stack, t_stack *new);
void	add_front_stack(t_stack **stack, t_stack *new);

#endif
