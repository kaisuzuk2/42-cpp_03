# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/19 09:25:17 by kaisuzuk          #+#    #+#              #
#    Updated: 2025/12/19 09:27:57 by kaisuzuk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	scavtrap
CXX		=	c++
FLAG	=	-Wall -Werror -Wextra -std=c++98

RM		=	rm -rf

SRCS	=	ClapTrap.cpp \
			ScavTrap.cpp
OBJS	=	$(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAG) -o $(NAME) main.cpp $(OBJS)

%.o: %.cpp
	$(CXX) $(FLAG) -c $< -o $@

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean fclean all

.PHONY: clean fclean re all