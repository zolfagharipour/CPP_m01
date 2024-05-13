# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/13 14:21:51 by mzolfagh          #+#    #+#              #
#    Updated: 2024/05/13 14:22:11 by mzolfagh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sifl

SRCS =  main.cpp

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