/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/09 09:40:23 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

void	print_tolower(void)
{
	int i = 1;
	char c = 0;
	while (c < 127)
	{
		printf("%sBEFORE => '%c' %sAFTER to_lower=> '%c' %sAFTER ft_tolower '%c'\n", white, c, blue, tolower(c), green, ft_tolower(c));
		c++;
	}
	printf("%sBEFORE => '%c' %sAFTER to_lower=> '%c' %sAFTER ft_tolower '%c'\n", white, c, blue, tolower(c), green, ft_tolower(c));
	printf("%s", white);

}