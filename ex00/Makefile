# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/20 20:11:24 by ayael-ou          #+#    #+#              #
#    Updated: 2023/12/22 12:29:25 by ayael-ou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

SRC_DIR = ./
SRCS = main.cpp\
		Zombie.cpp\
		newZombie.cpp\
		randomChump.cpp\

OBJS = ${SRCS:.cpp=.o}
CC = g++
RM = rm -rf

%.o: %.cpp
		${CC} -c $< -o $@ -std=c++98 -Wall -Wextra -Werror -g3

${NAME}: ${OBJS}
	${CC} ${OBJS} -o ${NAME}

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re