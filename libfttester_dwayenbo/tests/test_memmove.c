/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/08 17:17:22 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

void	print_memmove(void)
{
	int i = 1;
	char *func = "memmove";
	char *s1 = malloc(50);
	bzero(s1, 50);
	char *s2 = malloc(50);
	bzero(s2, 50);
	char *s3 = "abcdefghijklmnopq";
	size_t size = 5;
	
	memmove(s1, s3, size);
	ft_memmove(s2, s3, size);
	printf("%s%d. input : s1 = %s, s2 = %s, size = %ld\n%s%s =>    %s%s\nft_%s => %s\n\n", white, i++, s1, s2, size, blue, func,  s1, green, func, s2);
	memmove(s1, s3 + 2, size);
	ft_memmove(s2, s3 + 2, size);
	printf("%s%d. input : s1 = %s, s2 = %s, size = %ld\n%s%s =>    %s%s\nft_%s => %s\n\n", white, i++, s1, s2, size, blue, func,  s1, green, func, s2);
	memmove(s1 +4, s1+2, size);
	ft_memmove(s2 + 4, s2 +2, size);
	printf("%s%d. input : s1 = %s, s2 = %s, size = %ld\n%s%s =>    %s%s\nft_%s => %s\n\n", white, i++, s1, s2, size, blue, func,  s1, green, func, s2);
	memmove(s1 , s1 + 4, size);
	ft_memmove(s2, s2 + 4, size);
	printf("%s%d. input : s1 = %s, s2 = %s, size = %ld\n%s%s =>    %s%s\nft_%s => %s\n\n", white, i++, s1, s2, size, blue, func,  s1, green, func, s2);
	free(s1);
	free(s2);
}