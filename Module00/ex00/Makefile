# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/10 19:26:20 by sde-mull          #+#    #+#              #
#    Updated: 2023/09/22 16:33:08 by sde-mull         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= megaphone

SRCS			= ./megaphone.cpp

SRCS_OBJS		= $(SRCS:.cpp=.o)

CPP				= g++
FLAGS			= -Wall -Wextra -Werror -std=c++98
RM				= rm -f

%.o: %.cpp
	@$(CPP) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(SRCS_OBJS)
	@$(CPP) $(FLAGS) $(SRCS_OBJS) -o $(NAME)

clean:
	@$(RM) $(SRCS_OBJS)
	
fclean: clean
	@$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re