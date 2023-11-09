/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/09 08:48:29 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

void	print_strnstr(void)
{
	int i = 1;
	char *func = "strnstr";
	char *hay = 0;
	char *needle = "abcdefghijklmnopq";
	size_t size = 0;

	printf("%s%d. input : hay = '%s', needle = '%s', size = %ld\n%s%s =>    %s%s\nft_%s => %s\n\n", white, i++, hay, needle, size, blue, func,  strnstr(needle, needle, size), green, func, strnstr(needle, needle, size + 1));
//  INTENDED SEG FAULT
	// size = 2;
	// needle = 0;
	// printf("%s%d. input : hay = '%s', needle = '%s', size = %ld\n%s%s =>    %s%s\nft_%s => %s\n\n", white, i++, hay, needle, size, blue, func,  strnstr(needle, needle, size), green, func, strnstr(needle, needle, size + 1));
	size = 2;
	hay = "12";
	needle = "";
	printf("%s%d. input : hay = '%s', needle = '%s', size = %ld\n%s%s =>    %s%s\nft_%s => %s\n\n", white, i++, hay, needle, size, blue, func,  strnstr(hay, needle, size), green, func, ft_strnstr(hay, needle, size));
	size = 3;
	hay = "abcd";
	needle = "abc";
	printf("%s%d. input : hay = '%s', needle = '%s', size = %ld\n%s%s =>    %s%s\nft_%s => %s\n\n", white, i++, hay, needle, size, blue, func,  strnstr(hay, needle, size), green, func, ft_strnstr(hay, needle, size));
	size = 2;
	hay = "aab";
	needle = "ab";
	printf("%s%d. input : hay = '%s', needle = '%s', size = %ld\n%s%s =>    %s%s\nft_%s => %s\n\n", white, i++, hay, needle, size, blue, func,  strnstr(hay, needle, size), green, func, ft_strnstr(hay, needle, size));
	size = 3;
	hay = "aab";
	needle = "ab";
	printf("%s%d. input : hay = '%s', needle = '%s', size = %ld\n%s%s =>    %s%s\nft_%s => %s\n\n", white, i++, hay, needle, size, blue, func,  strnstr(hay, needle, size), green, func, ft_strnstr(hay, needle, size));
}