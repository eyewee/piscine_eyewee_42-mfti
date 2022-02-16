CC = gcc
CFLAGS = -Wall -Wextra -Werror
SOURCES = main.c
OBJECTS = ${SOURCES:.c=.o}

TARGET = ft_cat

all: ${TARGET}

.c.o:
	${CC} ${CFLAGS} -c $<

${TARGET}: ${OBJECTS}
	${CC} ${CFLAGS} -o $@ $^

clean:
	rm -f ${OBJECTS}

fclean: clean
	rm -f ${TARGET}

re: fclean all

