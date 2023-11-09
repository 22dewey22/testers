/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 06:39:30 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/09 09:41:39 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	print_test(char *str)
{
	if (!strcmp("atoi", str))
		print_atoi();
	else if(!strcmp("bzero", str))
		print_bzero();
	else if(!strcmp("calloc", str))
		print_calloc();
	else if(!strcmp("isalnum", str))
		print_isalnum();
	else if(!strcmp("isalpha", str))
		print_isalpha();
	else if(!strcmp("isascii", str))
		print_isascii();
	else if(!strcmp("isdigit", str))
		print_isdigit();
	else if(!strcmp("isprint", str))
		print_isprint();
	else if(!strcmp("itoa", str))
		print_itoa();
	// else if(!strcmp("lstadd_back", str))
	// 	print_lstadd_back();
	// else if(!strcmp("lstadd_front", str))
	// 	print_lstadd_front();
	// else if(!strcmp("lstclear", str))
	// 	print_lstclear();
	// else if(!strcmp("lstdelone", str))
	// 	print_lstdelone();
	// else if(!strcmp("lstiter", str))
	// 	print_lstiter();
	// else if(!strcmp("lstmap", str))
	// 	print_lstmap();
	// else if(!strcmp("lstnew", str))
	// 	print_lstnew();
	// else if(!strcmp("lstsize", str))
	// 	print_lstsize();
	else if(!strcmp("memchr", str))
		print_memchr();
	else if(!strcmp("memcmp", str))
		print_memcmp();
	else if(!strcmp("memcpy", str))
		print_memcpy();
	else if(!strcmp("memmove", str))
		print_memmove();
	else if(!strcmp("memset", str))
		print_memset();
	else if(!strcmp("putchar_fd", str))
		print_putchar_fd();
	else if(!strcmp("putendl_fd", str))
		print_putendl_fd();
	else if(!strcmp("putnbr_fd", str))
		print_putnbr_fd();
	else if(!strcmp("putstr_fd", str))
		print_putstr_fd();
	else if(!strcmp("split", str))
		print_split();
	else if(!strcmp("strchr", str))
		print_strchr();
	else if(!strcmp("strdup", str))
		print_strdup();
	else if(!strcmp("striteri", str))
		print_striteri();
	else if(!strcmp("strjoin", str))
		print_strjoin();
	else if(!strcmp("strlcat", str))
		print_strlcat();
	else if(!strcmp("strlcpy", str))
		print_strlcpy();
	else if(!strcmp("strlen", str))
		print_strlen();
	else if(!strcmp("strmapi", str))
		print_strmapi();
	else if(!strcmp("strncmp", str))
		print_strncmp();
	else if(!strcmp("strnstr", str))
		print_strnstr();
	else if(!strcmp("strrchr", str))
		print_strrchr();
	else if(!strcmp("strtrim", str))
		print_strtrim();
	else if(!strcmp("substr", str))
		print_substr();
	else if(!strcmp("tolower", str))
		print_tolower();
	else if(!strcmp("toupper", str))
		print_toupper();
}

int	main(int ac, char **av)
{
	printf("%s\n%s\n\n", green, ascii);

	if (ac != 2 || !is_libft(av[1]))
	{
		print_all();
	}
	else
	{
		printf("%s===>%s<===%s\n", orange, av[1], white);
		print_test(av[1]);
	}

	return (0);
}