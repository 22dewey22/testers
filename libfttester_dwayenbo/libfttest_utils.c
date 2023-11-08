/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfttest_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 07:52:11 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/08 09:18:43 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	is_libft(char *str)
{
	int	i;

	i = 0;
	while (functions[i] != 0)
	{
		if (!strcmp(str, functions[i]))
			return (1);
		i++;
	}
	return (0);
}

void	print_all(void)
{
	int i;

	i = 0;
	while (functions[i])
	{
		printf("%s===>%s<===\n%s", orange, functions[i], white);
		print_test((char *)functions[i]);
        printf("\n");
		i++;
	}
}