NAME = Zombie

SRC_DIR = ./
SRCS = main.cpp\
		Zombie.cpp\
		zombieHorde.cpp\

OBJS = ${SRCS:.cpp=.o}
CC = g++
RM = rm -rf

%.o: %.cpp
	${CC} -c $< -o $@

${NAME}: ${OBJS}
	${CC} ${OBJS} -o ${NAME}

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re