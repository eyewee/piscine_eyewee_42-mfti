CFLAGS = -Wall -Wextra -Werror
SOURCES = main.c
OBJECTS = ${SOURCES:.c=.o}

TARGET = ft_display_file


all: ${TARGET}	

.c.o:
	gcc ${CFLAGS} -c $<

${TARGET}: ${OBJECTS}
	gcc ${CFLAGS} -o $@ $^


clean:
	rm -f ${OBJECTS}

fclean: clean
	rm -f ${TARGET}

re: fclean all
	
