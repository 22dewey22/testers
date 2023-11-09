/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/09 09:41:28 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

void	print_toupper(void)
{
	int i = 1;
	char c = 0;
	while (c < 127)
	{
		printf("%sBEFORE => '%c' %sAFTER to_upper=> '%c' %sAFTER ft_toupper '%c'\n", white, c, blue, toupper(c), green, ft_toupper(c));
		c++;
	}
	printf("%sBEFORE => '%c' %sAFTER to_upper=> '%c' %sAFTER ft_toupper '%c'\n", white, c, blue, toupper(c), green, ft_toupper(c));
	printf("%s", white);

}