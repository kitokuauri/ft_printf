# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/23 19:58:31 by aursuare          #+#    #+#              #
#    Updated: 2024/09/14 19:26:19 by aursuare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAG = -Wall -Wextra -Werror

SRC = ft_strlen.c		\
				ft_putchar_fd.c	\
				ft_putstr_fd.c	\
				ft_putnbr_fd.c	

OBJ = ${SRC:.c=.o}

all: $(NAME)

$(NAME): $(OBJ) libft.h Makefile
	$(AR) rcs $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAG) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
