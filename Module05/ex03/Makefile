# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/09 17:46:45 by sde-mull          #+#    #+#              #
#    Updated: 2024/05/06 18:58:05 by sde-mull         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Intern

SRCS			= ./main.cpp ./Bureaucrat.cpp ./AForm.cpp ./PresidentialPardonForm.cpp ./ShrubberyCreationForm.cpp ./RobotomyRequestForm.cpp \
				  ./Intern.cpp

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

.PHONY: all clean fclean reP