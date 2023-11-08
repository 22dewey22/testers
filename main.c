/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 06:39:30 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/08 10:41:54 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	print_test(char *str)
{
	if (!strcmp("atoi", str))
		print_atoi();
	if (!strcmp("bzero", str))
		print_bzero();
	if (!strcmp("calloc", str))
		print_calloc();
	if (!strcmp("isalnum", str))
		print_isalnum();
	if (!strcmp("isalpha", str))
		print_isalpha();
	if (!strcmp("isascii", str))
		print_isascii();
	if (!strcmp("isdigit", str))
		print_isdigit();
	if (!strcmp("isprint", str))
		print_isprint();
	if (!strcmp("itoa", str))
		print_itoa();
	// if (!strcmp("lstadd_back", str))
	// 	print_lstadd_back();
	// if (!strcmp("lstadd_front", str))
	// 	print_lstadd_front();
	// if (!strcmp("lstclear", str))
	// 	print_lstclear();
	// if (!strcmp("lstdelone", str))
	// 	print_lstdelone();
	// if (!strcmp("lstiter", str))
	// 	print_lstiter();
	// if (!strcmp("lstmap", str))
	// 	print_lstmap();
	// if (!strcmp("lstnew", str))
	// 	print_lstnew();
	// if (!strcmp("lstsize", str))
	// 	print_lstsize();
	if (!strcmp("memchr", str))
		print_memchr();
	// if (!strcmp("memcmp", str))
	// 	print_memcmp();
	// if (!strcmp("memcpy", str))
	// 	print_memcpy();
	// if (!strcmp("memmove", str))
	// 	print_memmove();
	// if (!strcmp("memset", str))
	// 	print_memset();
	// if (!strcmp("putchar_fd", str))
	// 	print_putchar_fd();
	// if (!strcmp("putendl_fd", str))
	// 	print_putendl_fd();
	// if (!strcmp("putnbr_fd", str))
	// 	print_putnbr_fd();
	// if (!strcmp("putstr_fd", str))
	// 	print_putstr_fd();
	// if (!strcmp("split", str))
	// 	print_split();
	// if (!strcmp("strchr", str))
	// 	print_strchr();
	// if (!strcmp("strdup", str))
	// 	print_strdup();
	// if (!strcmp("striteri", str))
	// 	print_striteri();
	// if (!strcmp("strjoin", str))
	// 	print_strjoin();
	// if (!strcmp("strlcat", str))
	// 	print_strlcat();
	// if (!strcmp("strlcpy", str))
	// 	print_strlcpy();
	// if (!strcmp("strlen", str))
	// 	print_strlen();
	// if (!strcmp("strmapi", str))
	// 	print_strmapi();
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