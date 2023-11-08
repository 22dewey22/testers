/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/08 10:32:02 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

void	print_isprint(void)
{
	int i = 1;
	char *func = "isprint";
	int c = -128;

	while (c < 128)
	{
	printf("%s%d. input : %c\n%s%s =>    %d%s\nft_%s => %d\n\n",
		white, i++, (char) c, blue, func, isprint(c) > 0 ? 1 : 0, green, func, ft_isprint(c) > 0 ? 1 : 0);
	c++;
	}
}