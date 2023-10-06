# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/11 19:06:53 by sde-mull          #+#    #+#              #
#    Updated: 2023/10/06 12:59:57 by sde-mull         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= ClapTrap

SRCS			= ./main.cpp ./ClapTrap.cpp

SRCS_OBJS		= $(SRCS:.cpp=.o)

CPP				= c++
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

.PHONY: all clean fclean reP