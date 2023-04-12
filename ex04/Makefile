# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 17:34:30 by krochefo          #+#    #+#              #
#    Updated: 2023/04/11 19:16:32 by krochefo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed


SRCS_FILES= main.cpp

SRCS_PATH = ./
SRCS = $(addprefix $(SRCS_PATH), $(SRCS_FILES))

AR = ar rcs
CC = g++
RM = rm -f

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)                          

$(NAME):
	@$(CC) $(SRCS) $(CFLAGS) -o sed

clean:
	@$(RM) $(OBJS)

fclean:	clean
	@$(RM) $(NAME)

re:	fclean all