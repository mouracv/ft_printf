# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/05 14:47:49 by aleperei          #+#    #+#              #
#    Updated: 2023/06/27 13:32:36 by aleperei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#**********This is a Makefile**********#


#********Variaveis e conversoes********#

NAME =  libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

CME = ar -rcs 


FILES =  ft_printf.c \
	 ft_putnbr.c \
	 ft_putstr.c \
	 ft_undec.c \
	 ft_putchar.c \
	 ft_hexa.c \
	 ft_adrr.c \

#*******Regras e comandos**********#

FILESO = $(FILES:.c=.o)


$(NAME):   $(FILESO)
	$(CME) $(NAME) $(FILESO)

all:  $(NAME)

clean:
	$(RM) $(FILESO)

fclean: clean
	$(RM) $(NAME)

re: fclean all


.PHONY: all clean fclean re
