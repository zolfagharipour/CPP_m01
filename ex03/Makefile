# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/08 16:16:20 by mzolfagh          #+#    #+#              #
#    Updated: 2024/05/23 13:56:24 by mzolfagh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = violence

SRCS =  main.cpp HumanA.cpp	HumanB.cpp	Weapon.cpp

OBJS = ${SRCS:.cpp=.o}

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM	=	rm -rf

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} -o ${NAME} $^


clean: 
	${RM} ${OBJS} ${BONUS_OBJS}


fclean:
	${RM} ${NAME} ${CHECK}

re: fclean all

.PHONY: all bonus clean fclean re