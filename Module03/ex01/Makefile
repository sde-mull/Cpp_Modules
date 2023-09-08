# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/11 19:07:44 by sde-mull          #+#    #+#              #
#    Updated: 2023/09/07 19:28:40 by sde-mull         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= ScavTrap

SRCS			= ./main.cpp ./ClapTrap.cpp ./ScavTrap.cpp

SRCS_OBJS		= $(SRCS:.cpp=.o)

CPP				= g++
FLAGS			=  -std=c++98
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