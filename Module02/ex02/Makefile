# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/11 18:28:18 by sde-mull          #+#    #+#              #
#    Updated: 2023/08/11 18:55:28 by sde-mull         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Fixed

SRCS			= ./main.cpp ./Fixed.cpp

SRCS_OBJS		= $(SRCS:.cpp=.o)

CXX				= c++
XXFLAGS			= -Wall -Wextra -Werror -std=c++98
RM				= rm -f

%.o: %.cpp
	$(CXX) $(XXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(SRCS_OBJS)
	$(CXX) $(XXFLAGS) $(SRCS_OBJS) -o $(NAME)

clean:
	$(RM) $(SRCS_OBJS)
	
fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re