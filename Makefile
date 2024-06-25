# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/25 10:48:20 by rchavez           #+#    #+#              #
#    Updated: 2024/06/25 11:37:34 by rchavez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = ./Libft/ftlibft.a

GNL = ./get_next_line/get_next_line.a

PRINTF = ./ft_printf/ft_printf.a

BLIBFT = ./Libft/ftlibft_bonus.a

BGNL = ./get_next_line/get_next_line_bonus.a

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(LIBFT) $(GNL) $(PRINTF)
	ar rcs $(NAME) $(LIBFT) $(GNL) $(PRINTF)

$(LIBFT) :
	cd Libft && make

$(BLIBFT) :
	cd Libft && make bonus

$(GNL) :
	cd get_next_line && make

$(BGNL) :
	cd get_next_line && make bonus

$(PRINTF) :
	cd ft_printf && make

libft: $(BLIBFT)

gnl: $(BGNL)

printf: $(PRINTF)

bonus: $(BLIBFT) $(BGNL) $(PRINTF)
	ar rcs $(NAME) $(BLIBFT) $(BGNL) $(PRINTF)

clean:
	cd Libft && make clean
	cd get_next_line && make clean
	cd ft_printf && make clean

fclean:
	cd Libft && make fclean
	cd get_next_line && make fclean
	cd ft_printf && make fclean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re bonus libft gnl printf