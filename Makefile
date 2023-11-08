
NAME = libfttest

SRCS =	atoi bzero calloc isalnum isalpha \
		isascii isdigit isprint itoa memchr
# 		    lstadd_back lstadd_front \
# 		lstclear lstdelone lstiter lstlast lstmap lstnew \
# 		lstsize  memcmp memcpy memmove memset \
# 		putchar_fd putendl_fd putstr_fd putnbr_fd split strchr strdup striteri \
# 		strjoin strlcat strlcpy strlen strmapi strncmp strnstr strrchr strtrim substr tolower toupper \

SRCS_FILES = $(addsuffix .c, $(addprefix tests/test_, ${SRCS}))

OBJS = ${SRCS_FILES:.c=.o} main.o libfttest_utils.o

INCLUDES = /headers/

CC = cc 

CFLAGS = -Wall -Wextra -Werror

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
