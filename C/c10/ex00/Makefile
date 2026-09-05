
CC := gcc
CFLAGS := -Wall -Wextra -Werror
SRC := src
BIN := out
SRCS := ${wildcard ${SRC}/*.c}
OBJ := ${SRCS:.c=.o}
INCLUDES := includes

all : ${BIN}

${BIN} : ${OBJ}
	${CC} -o ${BIN} ${OBJ} 

%.o : %.c
	${CC} -c ${CFLAGS} -I${INCLUDES} -o $@ $<

clean : 
	rm -f ${OBJ}

fclean :
	rm -f ${OBJ} ${BIN}

re : fclean all

.PHONY : clean fclean all
