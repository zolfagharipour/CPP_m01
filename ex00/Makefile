# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 12:06:03 by mzolfagh          #+#    #+#              #
#    Updated: 2024/05/08 14:13:16 by mzolfagh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = zombie

SRCS =  main.cpp  newZombie.cpp	randomChump.cpp	Zombie.cpp

OBJS = ${SRCS:.c=.o}

CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98
RM	=	rm -rf

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} $^

bonus: ${BONUS_OBJS}
	${CC} ${CFLAGS} -o ${NAME} $^

# clean: 
# 	${RM} ${OBJS} ${BONUS_OBJS}


fclean:
	${RM} ${NAME} ${CHECK}

re: fclean all

.PHONY: all bonus clean fclean re