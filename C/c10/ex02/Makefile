CC := gcc
CFLAG := -Wall -Wextra -Werror
SRC := src
INCLUDES := includes
SRCS := ${wildcard ${SRC}/*.c}
OBJECTS := ${SRCS:.c=.o}
RM := rm -f
BIN := ft_tail

all: ${BIN}

${BIN} : ${OBJECTS}
	${CC} ${OBJECTS} -o ${BIN}

%.o : %.c
	${CC} ${CFLAG} -I${INCLUDES} -c $< -o $@

clean :
	${RM} ${OBJECTS}

fclean :
	${RM} ${OBJECTS} ${BIN}

re : fclean all
