# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 14:31:08 by hdo-minh          #+#    #+#              #
#    Updated: 2018/12/11 08:58:56 by hdo-minh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

#DIRECTORY
OBJ_DIR = ./obj
SRC_DIR = ./src
INC_DIR = ./includes

#COMPILATION
CC = clang
CFLAGS = -Wall -Wextra -Werror -Iinclude
#CFLAGS += -O3 -march=native -pipe -flto -pedantic -fsanitize=address -std=99
PRECOMPILE = @mkdir -p $(dir $@)
POSTCOMPILE =

#FILES.c .o .h
include src.mk

OBJ = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))
INC = $(INC_DIR)/libft.h

# PROGRESS BAR
T = $(words $(OBJ))
N = 0
C = $(words $N)$(eval N := x $N)
ECHO = "[`expr $C  '*' 100 / $T`%]"

#COLORS
_GREY=\x1b[30m
_RED=\x1b[31m
_GREEN=\x1b[32m
_YELLOW=\x1b[33m
_BLUE=\x1b[34m
_PURPLE=\x1b[35m
_CYAN=\x1b[36m
_WHITE=\x1b[37m
_END=\x1b[0m

#RULES
all:
	@$(MAKE) $(NAME) --no-print-directory

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(PRECOMPILE)
	$(CC) $(CFLAGS) -c -o $@ $<
	#printf "%-60b\r" "$(ECHO) $(_PURPLE) Compiling $< $(_END)"
	$(POSTCOMPILE)

$(NAME): $(OBJ) $(INC)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ_DIR)

norme: clean
	norminette -R CheckForbiddenSourceHeader $(SRC)
	norminette -R CheckForbiddenSourceHeader includes/fillit.h
	norminette -R CheckForbiddenSourceHeader libft/*.c libft/*.h

fclean: clean
	rm -rf $(NAME)

re:
	@$(MAKE) fclean --no-print-directory
	@$(MAKE) all --no-print-directory

.PHONY: all clean fclean re
.PRECIOUS: src.mk author
