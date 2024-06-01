# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#              #
#    Updated: 2024/04/21 21:11:16 by amaucher         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl
SOURCES = main.cpp Harl.cpp
		
OBJS = $(SOURCES:.cpp=.o)

CC = c++ -g
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)	

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re