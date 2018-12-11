# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 14:31:08 by hdo-minh          #+#    #+#              #
#    Updated: 2018/12/10 09:30:34 by hdo-minh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = clang

CFLAGS = -Wall -Wextra -Werror

INC_FILES = libft.h

SRC_NAME = 	ft_memset.c 		\
			ft_bzero.c			\
      		ft_memcpy.c			\
	  		ft_memccpy.c		\
	  		ft_memmove.c		\
	  		ft_memchr.c			\
			ft_memcmp.c			\
		  	ft_strlen.c			\
	 		ft_strdup.c			\
	  		ft_strcpy.c 		\
	  		ft_strncpy.c 		\
			ft_strcat.c 		\
			ft_strncat.c 		\
			ft_strlcat.c 		\
			ft_strchr.c 		\
			ft_strrchr.c 	 	\
			ft_strstr.c 		\
			ft_strnstr.c 		\
			ft_strcmp.c 		\
			ft_strncmp.c 		\
			ft_atoi.c 			\
			ft_islower.c 		\
			ft_isupper.c 		\
			ft_isalpha.c 		\
			ft_isdigit.c 		\
			ft_isalnum.c 		\
			ft_isascii.c 		\
			ft_isprint.c 		\
			ft_toupper.c 		\
			ft_tolower.c 		\
			ft_putchar.c 		\
			ft_putstr.c 		\
			ft_putchar_fd.c 	\
			ft_putstr_fd.c 		\
			ft_putnbr.c 		\
			ft_putnbr_fd.c 		\
			ft_memalloc.c 		\
			ft_memdel.c 		\
			ft_strnew.c 		\
			ft_strdel.c 		\
			ft_strclr.c 		\
			ft_striter.c 		\
			ft_striteri.c 		\
			ft_strmap.c 		\
			ft_strmapi.c 		\
			ft_strequ.c 		\
			ft_strnequ.c 		\
			ft_strsub.c 		\
			ft_strjoin.c 		\
			ft_strtrim.c 		\
			ft_putendl.c 		\
			ft_putendl_fd.c		\
			ft_itoa.c 			\
			ft_wordlen.c 		\
			ft_wordscount.c		\
			ft_strsplit.c 		\
			ft_lstnew.c 		\
			ft_lstadd.c 		\
			ft_lstdelone.c 		\
			ft_lstdel.c 		\
			ft_lstiter.c 		\
			ft_strndup.c 		\
			ft_lstsize.c 		\
			ft_lstmap.c 		\
			ft_bubblesort.c 	\
			ft_strcdup.c 		\
			ft_abs.c 			\
			ft_atoull.c 		\
			ft_check_bit.c 		\
			ft_error.c 			\
			ft_isblank.c 		\
			ft_ishexa.c 		\
			ft_lstadd_end.c 	\
			ft_lstindex.c 		\
			ft_lstpush.c 		\
			ft_lstpush_alloc.c 	\
			ft_lstsize.c 		\
			ft_max.c 			\
			ft_min.c 			\
			ft_print_hex.c 		\
			ft_print_memory.c 	\
			ft_putnbrendl.c 	\
			ft_putnbrendl_fd.c 	\
			ft_realloc.c 		\
			ft_set_bit.c 		\
			ft_sqrt.c 			\
			ft_stpcpy.c 		\
			ft_stpncpy.c 		\
			ft_strnjoin.c 		\
			ft_strnjoin_free.c 	\
			ft_toggle_bit.c 	\
			ft_xorswap.c


OBJ_PATH = obj

OBJ_NAME = $(SRC_NAME:%.c=%.o)

SRC = $(SRC_NAME)

#OBJ = $(addprefix $(OBJ_PATH)/, $(OBJ_NAME))

all: $(NAME)

$(NAME): $(INC_FILES) $(OBJ_NAME)
	ar rcs $(NAME) $(OBJ_NAME)

clean:
	rm -rf $(OBJ_NAME)

fclean: clean
	rm -rf $(NAME)

re:
	$(MAKE) fclean
	$(MAKE)

.PHONY: clean, fclean, re, all
