# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/10 21:28:36 by sde-mull          #+#    #+#              #
#    Updated: 2024/04/11 17:34:00 by sde-mull         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= btc

SRCS			= ./main.cpp ./BitcoinExchange.cpp

SRCS_OBJS		= $(SRCS:.cpp=.o)

CPP				= c++
FLAGS			=  -Wall -Wextra -Werror -std=c++98
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