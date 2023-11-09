/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/09 08:41:18 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

void	print_strncmp(void)
{
	int i = 1;
	char *func = "strncmp";
	char *s1 = 0;
	char *s2 = "abcdefghijklmnopq";
	size_t size = 0;

	printf("%s%d. input : s1 = '%s', s2 = '%s', size = %ld\n%s%s =>    %d%s\nft_%s => %d\n\n", white, i++, s1, s2, size, blue, func,  strncmp(s2, s2, size), green, func, strncmp(s2, s2, size + 1));
	size = 2;
	printf("%s%d. input : s1 = '%s', s2 = '%s', size = %ld\n%s%s =>    %d%s\nft_%s => %d\n\n", white, i++, s1, s2, size, blue, func,  strncmp(s2, s2, size), green, func, strncmp(s2, s2, size + 1));
	size = 2;
	s1 = "12";
	s2 = "";
	printf("%s%d. input : s1 = '%s', s2 = '%s', size = %ld\n%s%s =>    %d%s\nft_%s => %d\n\n", white, i++, s1, s2, size, blue, func,  strncmp(s1, s2, size), green, func, ft_strncmp(s1, s2, size));
	size = 3;
	s1 = "abcd";
	s2 = "abce";
	printf("%s%d. input : s1 = '%s', s2 = '%s', size = %ld\n%s%s =>    %d%s\nft_%s => %d\n\n", white, i++, s1, s2, size, blue, func,  strncmp(s1, s2, size), green, func, ft_strncmp(s1, s2, size));
	size = 2;
	s1 = "a";
	s2 = "ab";
	printf("%s%d. input : s1 = '%s', s2 = '%s', size = %ld\n%s%s =>    %d%s\nft_%s => %d\n\n", white, i++, s1, s2, size, blue, func,  strncmp(s1, s2, size), green, func, ft_strncmp(s1, s2, size));
}