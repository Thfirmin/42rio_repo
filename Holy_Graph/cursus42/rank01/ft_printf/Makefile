SRCS = ft_printf.c ft_ftputhex.c ft_ftputnbr.c ft_ftputunbr.c ft_ftputptr.c ft_ftputstr.c ft_ftputchr.c

OBJS = ${SRCS:.c=.o}

AR = ar rcs
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror

.c.o:
	cc ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	cd ./libft && make && cp -v libft.a ../${NAME}
	${AR} ${NAME} ${OBJS}
	ranlib ${NAME}

all:	${NAME}

clean:
	rm -rf ${OBJS}
	cd ./libft && make clean

fclean: clean
	rm -rf ${NAME}
	cd ./libft && make fclean

re: fclean all

.PHONY: all clean fclean re
