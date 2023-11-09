
NAME = libfttest

SRCS =	atoi bzero calloc isalnum isalpha \
		isascii isdigit isprint itoa memchr memcmp memcpy \
		memmove memset putchar_fd putendl_fd putstr_fd putnbr_fd split \
		strchr strdup striteri strjoin strlcat strlcpy strlen strmapi \
		strncmp strnstr strrchr strtrim substr tolower toupper lstadd_back \
		lstadd_front lstdelone lstclear lstiter lstlast lstsize lstnew lstmap

SRCS_FILES = $(addsuffix .c, $(addprefix tests/test_, ${SRCS}))

OBJS = main.o libfttest_utils.o ${SRCS_FILES:.c=.o} 

INCLUDES = /headers/

CC = cc 

CFLAGS = 

all: ${NAME}

.c.o:
	${CC} ${CFLAGS} -I ${INCLUDES} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${CC} -o ${NAME} ${OBJS} -lbsd -L. -lft

clean:
	rm -f ${OBJS} ${BONUS_OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY:all re clean fclean
