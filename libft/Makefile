# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eali <eali@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/08 16:58:11 by eali              #+#    #+#              #
#    Updated: 2023/08/04 18:24:19 by eali             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME        = libft.a
CC        = cc
CFLAGS    = -Wall -Wextra -Werror 
SRCS        =	ft_strlen.c\
				ft_isalpha.c\
				ft_isdigit.c\
				ft_isalnum.c\
				ft_isascii.c\
				ft_isprint.c\
				ft_memset.c\
				ft_toupper.c\
				ft_tolower.c\
				ft_strchr.c\
				ft_strrchr.c\
				ft_strncmp.c\
				ft_atoi.c\
				ft_bzero.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_strlcat.c\
				ft_strlcpy.c\
				ft_strnstr.c\
				ft_calloc.c\
				ft_strdup.c\
				ft_putchar_fd.c\
				ft_putnbr_fd.c\
				ft_putstr_fd.c\
				ft_putendl_fd.c\
				ft_substr.c\
				ft_strjoin.c\
				ft_strtrim.c\
				ft_strmapi.c\
				ft_striteri.c\
				ft_itoa.c\
				ft_split.c\
		
				
BONUS		=	ft_lstnew.c\
				ft_lstadd_front.c\
				ft_lstsize.c\
				ft_lstlast.c\
				ft_lstadd_back.c\
				ft_lstdelone.c\
				ft_lstclear.c\
				ft_lstiter.c\
				ft_lstmap.c\
				

                        
OBJS        = $(SRCS:.c=.o)
OBJSBONUS  = $(BONUS:.c=.o)


all: ${NAME}
${NAME}:	${OBJS}
	ar -rcs ${NAME} ${OBJS}
bonus: ${OBJSBONUS} ${OBJS}
	ar -rcs ${NAME} ${OBJSBONUS} ${OBJS}
clean:
			rm -f ${OBJS} ${OBJSBONUS} 

fclean:		clean
			rm -f ${NAME}

re:	fclean all

.PHONY : all clean fclean re