SOURCES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJECTS = $(addprefix srcs/, ${SOURCES:.c=.o})
INCDIR = includes 

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c

TARGET = libft.a


all: ${TARGET}

.c.o:
	${CC} ${CFLAGS} $< -o $@  -I${INCDIR} 


${TARGET}: ${OBJECTS}
	ar cr $@ ${OBJECTS}

clean:
	rm -f ${OBJECTS}

fclean: clean
	rm -f ${TARGET}

re: fclean all

.PHONY: all clean fclean re




