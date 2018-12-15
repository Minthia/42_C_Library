# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    src.mk                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/14 16:15:28 by hdo-minh          #+#    #+#              #
#    Updated: 2018/12/15 13:33:56 by hdo-minh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#BIT
SRC += src/bit/ft_check_bit.c
SRC += src/bit/ft_set_bit.c
SRC += src/bit/ft_toggle_bit.c
#CONVERT
SRC += src/convert/ft_atoi.c
SRC += src/convert/ft_atoull.c
SRC += src/convert/ft_itoa.c
#IN_OUT
SRC += src/in_out/ft_print_hex.c
SRC += src/in_out/ft_print_memory.c
SRC += src/in_out/ft_putchar.c
SRC += src/in_out/ft_putchar_fd.c
SRC += src/in_out/ft_putendl.c
SRC += src/in_out/ft_putendl_fd.c
SRC += src/in_out/ft_putnbr.c
SRC += src/in_out/ft_putnbr_fd.c
SRC += src/in_out/ft_putnbrendl.c
SRC += src/in_out/ft_putnbrendl_fd.c
SRC += src/in_out/ft_putstr.c
SRC += src/in_out/ft_putstr_fd.c
#LST
SRC += src/lst/ft_lstadd.c
SRC += src/lst/ft_lstadd_end.c
SRC += src/lst/ft_lstdel.c
SRC += src/lst/ft_lstdelone.c
SRC += src/lst/ft_lstindex.c
SRC += src/lst/ft_lstiter.c
SRC += src/lst/ft_lstmap.c
SRC += src/lst/ft_lstnew.c
SRC += src/lst/ft_lstpush.c
SRC += src/lst/ft_lstpush_alloc.c
SRC += src/lst/ft_lstsize.c
#MATHS
SRC += src/maths/ft_abs.c
SRC += src/maths/ft_max.c
SRC += src/maths/ft_min.c
SRC += src/maths/ft_sqrt.c
#MEM
SRC += src/mem/ft_bzero.c
SRC += src/mem/ft_memalloc.c
SRC += src/mem/ft_memccpy.c
SRC += src/mem/ft_memchr.c
SRC += src/mem/ft_memcmp.c
SRC += src/mem/ft_memcpy.c
SRC += src/mem/ft_memdel.c
SRC += src/mem/ft_memmove.c
SRC += src/mem/ft_memset.c
SRC += src/mem/ft_realloc.c
#STR
SRC += src/str/ft_stpcpy.c
SRC += src/str/ft_stpncpy.c
SRC += src/str/ft_strcat.c
SRC += src/str/ft_strccpy.c
SRC += src/str/ft_strcdup.c
SRC += src/str/ft_strchr.c
SRC += src/str/ft_strclen.c
SRC += src/str/ft_strclr.c
SRC += src/str/ft_strcmp.c
SRC += src/str/ft_strcpy.c
SRC += src/str/ft_strdel.c
SRC += src/str/ft_strdup.c
SRC += src/str/ft_strequ.c
SRC += src/str/ft_striter.c
SRC += src/str/ft_striteri.c
SRC += src/str/ft_strjoin.c
SRC += src/str/ft_strlcat.c
SRC += src/str/ft_strlen.c
SRC += src/str/ft_strmap.c
SRC += src/str/ft_strmapi.c
SRC += src/str/ft_strncat.c
SRC += src/str/ft_strncmp.c
SRC += src/str/ft_strncpy.c
SRC += src/str/ft_strndup.c
SRC += src/str/ft_strnequ.c
SRC += src/str/ft_strnew.c
SRC += src/str/ft_strnjoin.c
SRC += src/str/ft_strnjoin_free.c
SRC += src/str/ft_strnstr.c
SRC += src/str/ft_strrchr.c
SRC += src/str/ft_strsplit.c
SRC += src/str/ft_strstr.c
SRC += src/str/ft_strsub.c
SRC += src/str/ft_strtrim.c
SRC += src/str/ft_wordlen.c
SRC += src/str/ft_wordscount.c
#UTILITY
SRC += src/utility/ft_bubblesort.c
SRC += src/utility/ft_error.c
SRC += src/utility/ft_isalnum.c
SRC += src/utility/ft_isalpha.c
SRC += src/utility/ft_isascii.c
SRC += src/utility/ft_isblank.c
SRC += src/utility/ft_isdigit.c
SRC += src/utility/ft_ishexa.c
SRC += src/utility/ft_islower.c
SRC += src/utility/ft_isprint.c
SRC += src/utility/ft_islower.c
SRC += src/utility/ft_tolower.c
SRC += src/utility/ft_toupper.c
SRC += src/utility/ft_xorswap.c
