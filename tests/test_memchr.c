/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/08 10:48:32 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

void	print_memchr(void)
{
	int i = 1;
	char *func = "memchr";
	char *str = "abcdefghijklmnopq";
	char to_find = 'c';
	size_t size = 13;

	printf("%s%d. input : str = %s, to find =%c, size = %ld\n%s%s =>    %s%s\nft_%s => %s\n\n", white, i++, str, to_find, size, blue, func, (char *) memchr(str, to_find, size), green, func, (char *) ft_memchr(str, to_find, size));
	size = 2;
	to_find = 'o';
	str += 5;
	printf("%s%d. input : str = %s, to find =%c, size = %ld\n%s%s =>    %s%s\nft_%s => %s\n\n", white, i++, str, to_find, size, blue, func, (char *) memchr(str, to_find, size), green, func, (char *) ft_memchr(str, to_find, size));
	size = 2;
	to_find = 'o';
	str = "";
	printf("%s%d. input : str = %s, to find =%c, size = %ld\n%s%s =>    %s%s\nft_%s => %s\n\n", white, i++, str, to_find, size, blue, func, (char *) memchr(str, to_find, size), green, func, (char *) ft_memchr(str, to_find, size));

}