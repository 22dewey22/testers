/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/09 08:08:41 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

char test_func2(unsigned int k, char c)
{
	return (c + k);
}

void	print_strmapi(void)
{
	int i = 1;
	char *str = "Hello !";
	char *after;
	
	printf("%sTest %d\n", white, i++);
	after = ft_strmapi(str, &test_func2);
	printf("%sBEFORE => '%s'\n%sAFTER  => '%s'\n", green, str, blue, after);
	if (after)
		free(after);
	str = "";
	printf("%sTest %d\n", white, i++);
	after = ft_strmapi(str, &test_func2);
	printf("%sBEFORE => '%s'\n%sAFTER  => '%s'\n", green, str, blue, after);
	if (after)
		free(after);
	str = 0;
	printf("%sTest %d\n", white, i++);
	after = ft_strmapi(str, &test_func2);
	printf("%sBEFORE => '%s'\n%sAFTER  => '%s'\n", green, str, blue, after);
	if (after)
		free(after);
}