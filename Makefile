# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/18 15:27:45 by rennacir          #+#    #+#              #
#    Updated: 2023/04/01 14:57:12 by rennacir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC  =  main.c find_min.c five_case.c ft_atoi.c ft_lstadd_back.c\
		ft_lstadd_front.c ft_lstlast.c ft_lstnew.c ft_lstsize.c\
		ft_split.c ft_strjoin.c get_index_of_min.c operations.c\
		operations_1.c operations_2.c parsing.c push_element_to_top.c parsing_1.c\
		three_case.c indexing_elements.c algo.c normal_case.c get_before_max.c push_back.c\
# BNSSRC = bonus/get_next_line.c bonus/get_next_line_utils.c bonus/operations_bonus.c bonus/operations_bonus_1.c\
# 		bonus/operations_bonus_2.c bonus/parsing_bonus.c bonus/parsing_bonus_1.c\

OBJ = $(SRC:.c=.o)
# OBJBNS = $(BNSSRC:.c=.o)

all: $(NAME)

$(NAME):  $(OBJ) $(OBJBNS)
	@$(CC) $(CFLAGS) $(OBJ)  -o $(NAME)

%.o:%.c push_swap.h
	@$(CC) -c $(CFLAGS) $<

clean:
	@rm -f $(OBJ) $(OBJBNS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus