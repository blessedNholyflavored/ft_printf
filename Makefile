SRCS    = ft_printf.c ft_putchar_fd.c ft_putnbr.c ft_putstr.c ft_strlen.c ft_treat_char.c ft_treat_int.c ft_treat_string.c ft_treat_hex.c ft_treat_unsigned.c ft_printstr.c ft_treat_ptr.c ft_treat_perc.c 
OBJS    = ${SRCS:.c=.o}
NAME    = libftprintf.a
PRINT    = ar rc
CC    = cc
RM    = rm -f
CFLAGS    = -Wall -Werror -Wextra
.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
${NAME}:    ${OBJS}
			${PRINT} ${NAME} ${OBJS}
all:        ${NAME} 
clean:
		${RM} ${OBJS} 
fclean:		clean
			${RM} ${NAME}
re:        fclean all
.PHONY:    all clean re fclean
