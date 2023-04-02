# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/18 15:27:45 by rennacir          #+#    #+#              #
#    Updated: 2023/04/02 17:38:11 by rennacir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap
CHECKER_B = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror

PARS = $(addprefix parsing/, parsing.c parsing_1.c)
ALGO = $(addprefix algorithm/, algo.c find_min.c five_case.c get_before_max.c get_index_of_min.c \
		indexing_elements.c normal_case.c push_back.c push_element_to_top.c three_case.c)
OPER = $(addprefix operations/,  operations.c operations_1.c operations_2.c)
LIBF = $(addprefix libf/, ft_atoi.c ft_split.c ft_strjoin.c ft_lstadd_back.c ft_lstadd_front.c \
		ft_lstlast.c ft_lstnew.c ft_lstsize.c)

PARSB = $(addprefix checker_bonus/parsing/, parsing_bonus.c parsing_bonus_1.c)
LIBFB = $(addprefix checker_bonus/libf/, ft_atoi.c ft_lstadd_back.c ft_lstadd_front.c ft_lstlast.c ft_lstnew.c ft_lstsize.c ft_split.c ft_strjoin.c ft_strncmp.c)
OPERB = $(addprefix checker_bonus/operations/, operations_bonus.c operations_bonus_1.c operations_bonus_2.c)
GNL   = $(addprefix checker_bonus/get_next_line/, get_next_line.c get_next_line_utils.c)
BS    = $(addprefix checker_bonus/, main_bonus.c checker.c)

SRCS =  main.c $(OPER) $(PARS) $(ALGO) $(LIBF)
BSRC = $(BS) $(GNL) $(OPER) $(LIBFB) $(PARSB)

OBJ = $(SRCS:.c=.o)
OBJBNS = $(BSRC:.c=.o)

all: $(NAME)

$(NAME):  $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ)  -o $(NAME)
	@echo $(NAME) "Created"

bonus:  $(OBJBNS)
	@$(CC) $(CFLAGS) $(OBJBNS)  -o $(CHECKER_B)
	@echo $(CHECKER_B) "Created"

%.o:%.c push_swap.h
	@$(CC) -c $(CFLAGS) $< -o $@

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