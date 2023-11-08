/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/08 17:19:43 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

void	print_memset(void)
{
	int i = 1;
	char *func = "memset";
	char *s1 = malloc(50);
	bzero(s1, 50);
	char *s2 = malloc(50);
	bzero(s2, 50);
	char c = 'a';
	size_t size = 5;
	
	memset(s1, c, size);
	ft_memset(s2, c, size);
	printf("%s%d. input : s1 = %s, c = %c, size = %ld\n%s%s =>    %s%s\nft_%s => %s\n\n", white, i++, s1, c, size, blue, func,  s1, green, func, s2);
	memset(s1 + 4, 'x', size);
	ft_memset(s2 + 4, 'x', size);
	printf("%s%d. input : s1 = %s, c = %c, size = %ld\n%s%s =>    %s%s\nft_%s => %s\n\n", white, i++, s1, c, size, blue, func,  s1, green, func, s2);
	memset(s1 + 7, 2, size);
	ft_memset(s2 + 7, 2, size);
	printf("%s%d. input : s1 = %s, c = %c, size = %ld\n%s%s =>    %s%s\nft_%s => %s\n\n", white, i++, s1, c, size, blue, func,  s1, green, func, s2);
	memset(s1 + 8, 'E', size);
	ft_memset(s2 + 8, 'E', size);
	printf("%s%d. input : s1 = %s, c = %c, size = %ld\n%s%s =>    %s%s\nft_%s => %s\n\n", white, i++, s1, c, size, blue, func,  s1, green, func, s2);
	free(s1);
	free(s2);
}