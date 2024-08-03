# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcunha-l <rcunha-l@student.42luxembourg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/03 19:52:13 by rcunha-l          #+#    #+#              #
#    Updated: 2024/08/03 19:52:18 by rcunha-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRC = src/main.c src/ft_rush02.c src/ft_util.c
OBJ = $(SRC:.c=.o)
INCLUDES = -Iincludes
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@gcc $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	@gcc $(CFLAGS) $(INCLUDES) -c -o $@ $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
