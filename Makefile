# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 14:31:08 by hdo-minh          #+#    #+#              #
#    Updated: 2018/11/11 10:16:38 by hdo-minh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = clang

CFLAGS = -Wall -Wextra -Werror -O2

INC_PATH = includes/

INC_FILES = libft.h

INC = $(addprefix $(INC_PATH)/, $(INC_FILES))

SRC_PATH = src/

SRC_NAME =	ft_memset.c		\
			ft_bzero.c		\
      		ft_memcpy.c		\
	  		ft_memccpy.c	\
	  		ft_memmove.c	\
	  		ft_memchr.c		\
			ft_memcmp.c		\
		  	ft_strlen.c		\
	 		ft_strdup.c		\
	  		ft_strcpy.c 	\
	  		ft_strncpy.c 	\
			ft_strcat.c 	\
			ft_strncat.c 	\
			ft_strlcat.c 	\
			ft_strchr.c 	\
			ft_strrchr.c 	\
			ft_strstr.c 	\
			ft_strnstr.c 	\
			ft_strcmp.c 	\
			ft_strncmp.c 	\
			ft_atoi.c 		\
			ft_islower.c 	\
			ft_isupper.c 	\
			ft_isalpha.c 	\
			ft_isdigit.c 	\
			ft_isalnum.c 	\
			ft_isascii.c 	\
			ft_isprint.c 	\
			ft_toupper.c 	\
			ft_tolower.c 	\
			ft_putchar.c 	\
			ft_putstr.c 	\
			ft_putchar_fd.c \
			ft_putstr_fd.c 	\
			ft_putnbr.c 	\
			ft_putnbr_fd.c 	\
			ft_memalloc.c 	\
			ft_memdel.c 	\
			ft_strnew.c 	\
			ft_strdel.c 	\
			ft_strclr.c 	\
			ft_striter.c 	\
			ft_striteri.c 	\
			ft_strmap.c 	\
			ft_strmapi.c 	\
			ft_strequ.c 	\
			ft_strnequ.c 	\
			ft_strsub.c 	\
			ft_strjoin.c 	\
			ft_strtrim.c 	\
			ft_putendl.c 	\
			ft_putendl_fd.c	\
			ft_itoa.c 		\
			ft_wordlen.c 	\
			ft_wordscount.c	\
			ft_strsplit.c 	\
			ft_lstnew.c 	\
			ft_lstadd.c 	\
			ft_lstdelone.c 	\
			ft_lstdel.c 	\
			ft_lstiter.c 	\
			ft_strndup.c 	\
			ft_lstsize.c 	\
			ft_lstmap.c 	\
			ft_bubblesort.c \
			ft_strcdup.c

OBJ_PATH = obj

OBJ_NAME = $(SRC_NAME:%.c=%.o)

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))

OBJ = $(addprefix $(OBJ_PATH)/, $(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:
	$(MAKE) fclean
	$(MAKE)

.PHONY: clean, fclean, re, all
