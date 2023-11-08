/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_test.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 06:39:40 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/08 10:25:44 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TEST_H
# define LIBFT_TEST_H
// # include <bsd/string.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <unistd.h>
# include <ctype.h>
# include "libft.h"
static char	ascii[] = "      :::        ::::::::::: :::::::::  :::::::::: ::::::::::: \n     :+:            :+:     :+:    :+: :+:            :+:      \n    +:+            +:+     +:+    +:+ +:+            +:+       \n   +#+            +#+     +#++:++#+  :#::+::#       +#+        \n  +#+            +#+     +#+    +#+ +#+            +#+       by dwayenbo\n #+#            #+#     #+#    #+# #+#            #+#          \n########## ########### #########  ###            ###           \n";
static char green[] = "\033[0;32m";
static char	white[] = "\033[0;37m";
static char	orange[] = "\033[0;33m";
static char	blue[] = "\033[0;34m";
static char	*functions[] = {"atoi", "bzero", "calloc", "isalnum", "isalpha",
		"isascii", "isdigit", "isprint", "itoa", "lstadd_back", "lstadd_front",
		"lstclear", "lstdelone", "lstiter", "lstlast", "lstmap", "lstnew",
		"lstsize", "memchr", "memcmp", "memcpy", "memmove", "memset",
		"putchar_fd", "putendl_fd", "putstr_fd", "putnbr_fd", "split", "strchr", "strdup", "striteri",
		"strjoin", "strlcat", "strlcpy", "strlen", "strmapi", "strncmp","strnstr","strrchr", "strtrim", "substr", "tolower", "toupper", 0};
int		is_libft(char *str);
void	print_all(void);
void	print_test(char *str);
void	print_atoi(void);
void	print_bzero(void);
void	print_calloc(void);
void	print_isalnum(void);
void	print_isalpha(void);
void	print_isascii(void);
void	print_isdigit(void);
void	print_isprint(void);
void	print_itoa(void);
void	print_lstadd_back(void);
void	print_lstadd_front(void);
void	print_lstclear(void);
void	print_lstdelone(void);
void	print_lstiter(void);
void	print_lstmap(void);
void	print_lstnew(void);
void	print_lstsize(void);
void	print_memchr(void);
void	print_memcmp(void);
void	print_memcpy(void);
void	print_memmove(void);
void	print_memset(void);
void	print_putchar_fd(void);
void	print_putendl_fd(void);
void	print_putnbr_fd(void);
void	print_putstr_fd(void);
void	print_split(void);
void	print_strchr(void);
void	print_strdup(void);
void	print_striteri(void);
void	print_strjoin(void);
void	print_strlcat(void);
void	print_strlcpy(void);
void	print_strlen(void);
void	print_strmapi(void);

#endif