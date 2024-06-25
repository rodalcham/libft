# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/25 10:37:06 by rchavez           #+#    #+#              #
#    Updated: 2024/06/25 11:11:21 by rchavez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = \
	get_next_line.c get_next_line_utils.c

O_FOLDER = OBJ/

BO_FOLDER = B_OBJ/

OFILES = $(CFILES:%.c=$(O_FOLDER)%.o)

BCFILES = \
	get_next_line_bonus.c get_next_line_utils_bonus.c

BOFILES = $(BCFILES:%.c=$(BO_FOLDER)%.o)

CC = cc

NAME = get_next_line.a

BNAME = get_next_line_bonus.a

LIB = get_next_line.h

LIB_B = get_next_line_bonus.h

CFLAGS = -Wall -Werror -Wextra -c

all: $(O_FOLDER) $(NAME)

$(NAME) : $(LIB) $(OFILES)
	ar rcs $(NAME) $(OFILES)

bonus : $(BO_FOLDER) $(BOFILES) $(LIB_B)
	ar rcs $(BNAME) $(BOFILES)

$(O_FOLDER)%.o : %.c
	$(CC) $(CFLAGS) -include $(LIB) -o $@ $^

$(BO_FOLDER)%.o : %.c
	$(CC) $(CFLAGS) -include $(LIB_B) -o $@ $^

$(O_FOLDER) :
	@if [ ! -d $(O_FOLDER) ]; then\
		mkdir $(O_FOLDER);\
	fi

$(BO_FOLDER) :
	@if [ ! -d $(BO_FOLDER) ]; then\
		mkdir $(BO_FOLDER);\
	fi

clean :
	@if [ -d $(O_FOLDER) ]; then\
		rm -fr $(O_FOLDER);\
	fi
	@if [ -d $(BO_FOLDER) ]; then\
		rm -fr $(BO_FOLDER);\
	fi

fclean : clean
	rm -f $(NAME)
	rm -f $(BNAME)

re : fclean all

.PHONY: all clean fclean re bonus setb $(BONUS)