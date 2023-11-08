/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/08 10:23:56 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

void	print_isascii(void)
{
	int i = 1;
	char *func = "isascii";
	int c = -128;

	while (c < 250)
	{
	printf("%s%d. input : %c\n%s%s =>    %d%s\nft_%s => %d\n\n",
		white, i++, (char) c, blue, func, isascii(c) > 0 ? 1 : 0, green, func, ft_isascii(c) > 0 ? 1 : 0);
	c++;
	}
}