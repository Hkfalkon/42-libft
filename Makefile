# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkwak <hkwak@student.42tokyo.jp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/13 16:52:08 by hkwak             #+#    #+#              #
#    Updated: 2021/02/15 15:06:36 by hkwak            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a
CC      = gcc
LIBS    = ar -rcs
CFLAGS  = -Wall -Wextra -Werror
RM      = rm -rf

SRCS    = ft_bzero.c \
		ft_memset.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c\
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \


OBJCTS  = $(SRCS:%.c=%.o)

#########################################################################################################

all :     $(NAME)
	@echo Hello World!

.c.o:
	    ${CC} ${CFLAGS} -c $< -o $@

$(NAME):  $(OBJCTS)
	ar rc $(NAME) $(OBJCTS)
	@echo "Libft compilation complete."

$(OBJCTS): $(SRSC)

clean :
	rm -f $(OBJCTS)
	@echo "Object files deleted."

fclean : clean
	rm -f $(NAME)
	@echo "Executable deleted."

re : fclean all

.PHONY : all clean fclean re
