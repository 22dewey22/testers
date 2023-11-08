/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/08 22:43:29 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

static void test_func(unsigned int k, char *str)
{
	printf("index : %d, str[%d] = %c\n", k, k, *str);
}

void	print_striteri(void)
{
	int i = 1;
	char *c = "Hello !";
	
	printf("%s", white);
	ft_striteri(c, &test_func);
}