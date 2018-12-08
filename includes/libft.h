/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:31:36 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/11/11 10:16:21 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647

# define C_CLEAR ("\033[H\033[2J")
# define C_RESET ("\033[0m")
# define C_BOLD ("\033[1m")
# define C_REV ("\033[7m")
# define C_RESET ("\033[0m")
# define C_WHITE ("\x1B[0m")
# define C_RED ("\x1B[31m")
# define C_GREEN ("\x1B[32m")
# define C_YELLOW ("\x1B[33m")
# define C_BLUE ("\x1B[34m")
# define C_MAGENTA ("\x1B[35m")
# define C_BWHITE ("\033[1m\x1B[0m")
# define C_BRED ("\033[1m\x1B[31m")
# define C_BGREEN ("\033[1m\x1B[32m")
# define C_BYELLOW ("\033[1m\x1B[33m")
# define C_BBLUE ("\033[1m\x1B[34m")
# define C_BMAGENTA ("\033[1m\x1B[35m")
# define C_BCYAN ("\033[1m\x1B[36m")
# define C_BGRAY ("\033[1m\033[22;37m")

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

/****************************
** LIBC FUNCTIONS - PART 1 **
****************************/

void				*ft_memset(void *s, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *src);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t n);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *s, const char *to_find);
char				*ft_strnstr(const char *s, const char *to_find, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *s);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);

/**********************************
** ADDITIONAL FUNCTIONS - PART 2 **
**********************************/

void				*ft_memalloc(size_t n);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t n);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(const char *s, char (*f)(char));
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int					ft_strequ(const char *s1, const char *s2);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
char				*ft_strsub(const char *s, unsigned int start, size_t n);
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strtrim(const char *s);
char				**ft_strsplit(const char *s, char c);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putstr(const char *s);
void				ft_putendl(const char *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(const char *s, int fd);
void				ft_putendl_fd(const char *s, int fd);
void				ft_putnbr_fd(int n, int fd);

/********************
** BONUS FUNCTIONS **
********************/

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

/***********************
** PERSONAL FUNCTIONS **
***********************/

unsigned int		ft_abs(int value);
unsigned long long	ft_atoull(const char *s);
void				ft_bubblesort(char **tab, size_t n);
int					ft_check_bit(int nbr, int index);
void				ft_error(char *s);
int					ft_isblank(int c);
int					ft_ishexa(int c);
int					ft_islower(int c);
int					ft_isupper(int c);
void				ft_lstadd_end(t_list **alst, t_list *new);
t_list				*ft_lstindex(t_list *lst, size_t index);
void				ft_lstpush(t_list **begin_list, t_list *elem);
t_list				*ft_lstpush_alloc(t_list **begin_list, void *content, int content_size);
size_t				ft_lstsize(t_list *lst);
int					ft_max(int x, int y);
int					ft_min(int x, int y);
void				ft_print_hex(unsigned int value, size_t n);
void				*ft_print_memory(void *addr, unsigned int n);
void				ft_putnbrendl(int n);
void				ft_putnbrendl_fd(int n, int fd);
void				*ft_realloc(void *ptr, size_t n);
int					ft_set_bit(int nbr, int index, char value);
int					ft_sqrt(int nbr);
char				*ft_stpcpy(char *dst, const char *src);
char				*ft_stpncpy(char *dst, const char *src, size_t n);
char				*ft_strcdup(const char *src, char c);
char				*ft_strndup(const char *src, size_t n);
char				*ft_strnjoin(const char *s1, const char *s2, size_t n);
char				*ft_strnjoin_free(const char *s1, const char *s2, size_t n);
int					ft_toggle_bit(int nbr, int index);
size_t				ft_wordscount(char const *s, char c);
size_t				ft_wordlen(char const *s, char c);
void				ft_xorswap(int *x, int *y);

#endif
