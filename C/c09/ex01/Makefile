CC := gcc

FLAGS := -Wall -Wextra -Werror

DIR := ./srcs

SRC := ft_putchar.c  ft_swap.c  ft_putstr.c  ft_strlen.c  ft_strcmp.c

SRCS := $(addprefix $(DIR)/, $(SRC))

INCLUDES := ./includes

OBJECTS := $(SRCS:.c=.o)

AR := ar

ARFLAGS := rcs

NAME := libft.a



all : $(NAME)

$(NAME) : $(OBJECTS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJECTS)

%.o:%.c
	$(CC) -c $(FLAGS) -I$(INCLUDES) -o $@ $< 

clean :
	rm -f $(OBJECTS)

fclean :
	rm -f $(OBJECTS) $(NAME)

re : fclean all

.PHONY : clean fclean re all
