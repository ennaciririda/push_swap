/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:54:34 by rennacir          #+#    #+#             */
/*   Updated: 2023/04/03 01:57:41 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <sys/types.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
}	t_stack;

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 55
# endif

void	func(void);
void	check_arguments(int argc);
char	**check(int argc, char **argv);
void	check_duplication(char **splited);
char	*ft_strjoin_(int size, char **strs, char *sep);
char	**ft_split(char const *s, char c);
long	ft_atoi(const char *str);
void	plus_or_minus_case(char *str);
void	check_max_int(char **splited);
t_stack	*ft_lstnew(int data);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_lstlast(t_stack *lst);
int		ft_lstsize(t_stack *lst);
void	swap(int *a, int *b);
void	sa(t_stack *stack_a, int i);
void	sb(t_stack *stack_b, int i);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack_a, int i);
void	rb(t_stack **stack_b, int i);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a, int i);
void	rrb(t_stack **stack_b, int i);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	three_case(t_stack **stack_a);
void	two_case(t_stack **stack_a);
void	fill_stack(char **split, t_stack **stack_a);
int		find_min(t_stack **stack_a);
int		find_min_with_cond(t_stack **stack_a);
int		find_max(t_stack **stack_a);
int		get_index(t_stack **stack_a, int data);
int		get_index_of_min(t_stack **stack_a);
void	push_element_to_top(t_stack **stack_a);
void	push_b(t_stack **stack_a, t_stack **stack_b, int chunk, int chunk_size);
void	push_back(t_stack **stack_a, t_stack **stack_b);
void	five_case(t_stack **stack_a, t_stack **stack_b);
void	indexing_elements(t_stack **stack_a);
void	algo(t_stack **stack_a, t_stack **stack_b, int num_of_chunks);
void	push_element_to_top_(t_stack **stack_a, int data, int flag);
void	normal_case(t_stack **stack_a);
int		get_before_max(t_stack **stack_b);
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strchr(char *str, char c);
char	*ft_strdup(char *s1);
size_t	ft_strlen(const char *str);
int		is_sorted(t_stack **stack_a);
void	checker(t_stack **stack_a, t_stack **stack_b);
int		ft_strncmp(const char *first, const char *second);
void	cases(t_stack **stack_a, t_stack **stack_b);
void	is_sorted_check(t_stack *stack_a, t_stack *stack_b);

#endif