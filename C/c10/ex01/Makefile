CC := gcc
CFLAGS := -Wall -Wextra -Werror
SRC := src
SRCS := ${wildcard ${SRC}/*.c}
INCLUDES := includes
OBJ := ${SRCS:.c=.o}
RM := rm -f
BINARY := ft_cat

all : ${BINARY}

${BINARY} : ${OBJ}
	${CC} -o ${BINARY} ${OBJ}

%.o : %.c
	${CC} ${CFLAGS} -I${INCLUDES} -c $< -o $@

clean :
	${RM} ${OBJ}
fclean :
	${RM} ${OBJ} ${BINARY}
re : fclean all
