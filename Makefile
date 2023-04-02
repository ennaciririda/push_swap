# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/18 15:27:45 by rennacir          #+#    #+#              #
#    Updated: 2023/04/02 00:07:14 by rennacir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap
CHECKER_BONUS = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC  =  main.c find_min.c five_case.c ft_atoi.c ft_lstadd_back.c\
		ft_lstadd_front.c ft_lstlast.c ft_lstnew.c ft_lstsize.c\
		ft_split.c ft_strjoin.c get_index_of_min.c operations.c\
		operations_1.c operations_2.c parsing.c push_element_to_top.c parsing_1.c\
		three_case.c indexing_elements.c algo.c normal_case.c get_before_max.c push_back.c
		# get_next_line.c get_next_line_utils.c\

BSRC = $(addprefix checker_bonus/,  get_next_line.c get_next_line_utils.c operations_bonus.c operations_bonus_1.c \
		operations_bonus_2.c parsing_bonus.c parsing_bonus_1.c ft_strncmp.c main_bonus.c checker.c) \
 		ft_atoi.c ft_lstadd_back.c ft_lstadd_front.c ft_lstlast.c ft_lstnew.c ft_lstsize.c ft_split.c ft_strjoin.c


OBJ = $(SRC:.c=.o)
OBJBNS = $(BSRC:.c=.o)

all: $(NAME)

$(NAME):  $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ)  -o $(NAME)
	@echo $(NAME) "Created"

bonus:  $(OBJBNS)
	@$(CC) $(CFLAGS) $(OBJBNS)  -o $(CHECKER_BONUS)
	@echo $(CHECKER_BONUS) "Created"

%.o:%.c push_swap.h
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

clean_b:
	@$(RM) $(OBJBNS)

fclean_b: clean_b
	@$(RM) $(CHECKER_BONUS)

re: fclean all

re_b: fclean_b bonus

.PHONY: all clean fclean re bonus clean_b fclean_b re_b