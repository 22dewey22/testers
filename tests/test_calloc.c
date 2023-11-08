/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/08 09:49:07 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

void	print_calloc(void)
{
	int i = 1;
	char *func = "calloc";
	char *str2 = calloc(9, sizeof(char));
	char *str3 = ft_calloc(9, sizeof(char));

	str2[4] = 'i';
	str3[4] = 'i';
	str2[5] = 'd';
	str3[5] = 'd';
	printf("%s%d. input : from first byte\n%s%s =>    %s%s\nft_%s => %s\n\n",
		white, i++, blue, func, str2, green, func, str3);
	printf("%s%d. input : 4 bytes further\n%s%s =>    %s%s\nft_%s => %s\n",
		white, i++, blue, func, str2 + 4, green, func, str3 + 4);
}