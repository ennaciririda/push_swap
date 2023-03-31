# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/18 15:27:45 by rennacir          #+#    #+#              #
#    Updated: 2023/03/31 02:50:25 by rennacir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC  =  main.c find_min.c five_case.c ft_atoi.c ft_lstadd_back.c\
		ft_lstadd_front.c ft_lstlast.c ft_lstnew.c ft_lstsize.c\
		ft_split.c ft_strjoin.c get_index_of_min.c operations.c operations_1.c operations_2.c parsing.c\
		push_element_to_top.c three_case.c indexing_elements.c algo.c normal_case.c get_before_max.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):  $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o:%.c push_swap.h
	@$(CC) -c $(CFLAGS) $<

clean:
	@rm -f $(OBJ) $(OBJBONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus