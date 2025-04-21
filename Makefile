# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ejavier- <ejavier-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/21 19:40:11 by ejavier-          #+#    #+#              #
#    Updated: 2025/04/21 19:40:11 by ejavier-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del programa
NAME = libft.a

# Compilador y banderas
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Archivos fuente y objetos
SRCS = $(wildcard ft_*.c)
OBJS = $(SRCS:.c=.o)

# Comandos básicos
AR = ar rcs
RM = rm -f

# Regla principal
all: $(NAME)

$(NAME): $(OBJS)
    $(AR) $(NAME) $(OBJS)

# Regla para limpiar archivos objeto
clean:
    $(RM) $(OBJS)

# Regla para limpiar todo (objetos y la biblioteca)
fclean: clean
    $(RM) $(NAME)

# Regla para recompilar todo
re: fclean all
