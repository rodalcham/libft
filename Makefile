# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/25 10:48:20 by rchavez           #+#    #+#              #
#    Updated: 2024/06/25 13:37:24 by rchavez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = \
	Libft/ft_isalpha.c Libft/ft_isdigit.c Libft/ft_isalnum.c\
	Libft/ft_isascii.c Libft/ft_isprint.c Libft/ft_strlen.c Libft/ft_memset.c\
	Libft/ft_bzero.c Libft/ft_memcpy.c Libft/ft_memmove.c Libft/ft_strlcpy.c\
	Libft/ft_strlcat.c Libft/ft_toupper.c Libft/ft_tolower.c Libft/ft_strchr.c\
	Libft/ft_strrchr.c Libft/ft_strncmp.c Libft/ft_memchr.c Libft/ft_memcmp.c\
	Libft/ft_strnstr.c Libft/ft_atoi.c Libft/ft_calloc.c Libft/ft_strdup.c\
	Libft/ft_substr.c Libft/ft_strjoin.c Libft/ft_strtrim.c Libft/ft_split.c\
	Libft/ft_itoa.c Libft/ft_strmapi.c Libft/ft_striteri.c\
	Libft/ft_putchar_fd.c Libft/ft_putstr_fd.c Libft/ft_putendl_fd.c\
	Libft/ft_putnbr_fd.c

GNL = \
	get_next_line/get_next_line.c get_next_line/get_next_line_utils.c

PRINTF = \
	ft_printf/ft_printf.c ft_printf/ft_fill.c ft_printf/ft_printchar.c\
	ft_printf/ft_printstr.c ft_printf/ft_printnum.c\
	ft_printf/ft_printptr.c ft_printf/ft_num_utils.c\
	ft_printf/ft_printunsigned.c

BLIBFT = \
	Libft/ft_lstnew_bonus.c Libft/ft_lstadd_front_bonus.c\
	Libft/ft_lstsize_bonus.c Libft/ft_lstlast_bonus.c\
	Libft/ft_lstadd_back_bonus.c Libft/ft_lstdelone_bonus.c\
	Libft/ft_lstclear_bonus.c Libft/ft_lstiter_bonus.c\
	Libft/ft_lstmap_bonus.c

BGNL = \
	get_next_line/get_next_line_bonus.c\
	get_next_line/get_next_line_utils_bonus.c

OBJ = OBJ/

OL = $(OBJ)/Libft

OG = $(OBJ)/get_next_line

OP = $(OBJ)/ft_printf

OFILES = $(LIBFT:%.c=$(OBJ)%.o) $(GNL:%.c=$(OBJ)%.o) $(PRINTF:%.c=$(OBJ)%.o)

BOFILES = $(LIBFT:%.c=$(OBJ)%.o) $(BLIBFT:%.c=$(OBJ)%.o) $(BGNL:%.c=$(OBJ)%.o) $(PRINTF:%.c=$(OBJ)%.o)

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(OL) $(OG) $(OP) $(OFILES)
	rm -f $(NAME)
	ar rcs $(NAME) $(OFILES)

$(OBJ)%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $^

$(OBJ) :
	@if [ ! -d $(OBJ) ]; then\
		mkdir $(OBJ);\
	fi

$(OP) : $(OBJ)
	@if [ ! -d $(OP) ]; then\
		mkdir $(OP);\
	fi

$(OL) : $(OBJ)
	@if [ ! -d $(OL) ]; then\
		mkdir $(OL);\
	fi

$(OG) : $(OBJ)
	@if [ ! -d $(OG) ]; then\
		mkdir $(OG);\
	fi

libft: $(BLIBFT)

gnl: $(BGNL)

printf: $(PRINTF)

bonus: $(OL) $(OG) $(OP) $(BOFILES)
	rm -f $(NAME)
	ar rcs $(NAME) $(BOFILES)

clean:
	cd Libft && make clean
	cd get_next_line && make clean
	cd ft_printf && make clean
	rm -fr $(OBJ)

fclean: clean
	cd Libft && make fclean
	cd get_next_line && make fclean
	cd ft_printf && make fclean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re bonus libft gnl printf