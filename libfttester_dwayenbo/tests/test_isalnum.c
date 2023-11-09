/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/09 14:26:38 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

void	print_isalnum(void)
{
	int i = 1;
	char *func = "isalnum";
	int c = 100;

	while (c < 127)
	{
	printf("%s%d. input : %c\n%s%s =>    %d%s\nft_%s => %d\n\n",
		white, i++, (char) c, blue, func, isalnum(c) > 0 ? 1 : 0, green, func, ft_isalnum(c) > 0 ? 1 : 0);
	c++;
	}
}