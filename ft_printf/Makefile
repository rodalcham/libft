# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/16 09:20:48 by rchavez@stu       #+#    #+#              #
#    Updated: 2024/06/25 11:22:10 by rchavez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

O_FOLDER = OBJ/

CFILES = \
	ft_printf.c ft_fill.c ft_printchar.c ft_printstr.c ft_printnum.c \
	ft_printptr.c ft_num_utils.c ft_printunsigned.c

OFILES = $(CFILES:%.c=$(O_FOLDER)%.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra

HEADER = ft_printf.h

all : $(O_FOLDER) $(NAME)

$(NAME) : $(OFILES) $(HEADER)
	ar rcs $(NAME) $(OFILES)

$(O_FOLDER)%.o : %.c
	$(CC) $(CFLAGS) -c -include $(HEADER) -o $@ $^

$(O_FOLDER) :
	@if [ ! -d $(O_FOLDER) ]; then\
		mkdir $(O_FOLDER);\
	fi

clean :
	rm -f $(OFILES)

fclean : clean
	rm -f $(NAME)
	@if [ -d $(O_FOLDER) ]; then\
		rm -fr $(O_FOLDER);\
	fi

re : fclean all

.PHONY : all clean fclean re
