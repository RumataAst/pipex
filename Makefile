# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/26 14:42:05 by akretov           #+#    #+#              #
#    Updated: 2024/04/28 15:25:11 by akretov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	pipex
CC			=	cc
CFLAGS		=	-g -Wall -Wextra -Werror
INCLUDE		=	-I.

LIB			=	-L./libft -lft
LIBPATH		= 	libft/

SRCS		=	src_main/main.c \
				src_main/utils.c \
				src_main/child.c

OBJS		= 	$(SRCS:.c=.o)

all:		$(LIBPATH)libft.a $(NAME)

$(LIBPATH)libft.a:
			$(MAKE) -C $(LIBPATH)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $^ $(INCLUDE) $(LIB) -o $@

clean:
			$(MAKE) clean -C $(LIBPATH)
			rm -f src_main/*.o

fclean:		clean
			$(MAKE) fclean -C $(LIBPATH)
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
