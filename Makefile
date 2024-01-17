#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: riael <#42gether | home@42berlin>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 19:56:33 by riael             #+#    #+#              #
#    Updated: 2022/12/24 22:29:53 by riael            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRCS	= ft_atoi.c      ft_createword.c  ft_isdigit.c  ft_memmove.c      ft_putendl.c     ft_putstr_fd.c  ft_strclr.c \
ft_strlcat.c  ft_strnstr.c   ft_bzero.c  ft_get_args.c    ft_isprint.c  ft_memset.c  ft_putendl_fd.c  ft_putunbr.c  \
ft_strcpy.c    ft_strlcpy.c  ft_strrchr.c ft_calc_printed_bytes.c  ft_isalnum.c  ft_isspace.c  ft_printf.c ft_puthexnbr.c \
ft_realloc.c    ft_strdel.c    ft_strlen.c   ft_strrev.c ft_calloc.c  ft_isalpha.c  ft_itoa.c ft_printf_flag.c  ft_putnbr.c \
ft_split.c      ft_strdup.c    ft_strmap.c   ft_strtrim.c ft_countdigits.c  ft_isascii.c  ft_memchr.c ft_printf_word.c ft_putnbr_fd.c \
ft_strcat.c     ft_striter.c   ft_strmapi.c  ft_substr.c ft_countudigits.c ft_ischars.c ft_memcmp.c ft_putchar.c  ft_putpointer.c \
ft_strchr.c     ft_striteri.c  ft_strncmp.c  ft_tolower.c ft_countwords.c ft_iscntrl.c  ft_memcpy.c ft_putchar_fd.c ft_putstr.c \
ft_strchrnul.c  ft_strjoin.c   ft_strnew.c   ft_toupper.c

OBJS	= ${SRCS:.c=.o}
INCS	= includes
NAME	= libft.a
LIBC	= ar rc
LIBR	= ranlib
CC		= cc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
