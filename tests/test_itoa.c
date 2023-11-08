/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/08 10:36:18 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

void	print_itoa(void)
{
	int i = 1;
	int nb = -2147483648;

	printf("%s%d. input : %d\n%sft_itoa => %s\n\n", white, i++, nb, green,
		ft_itoa(nb));
	nb = 0;
	printf("%s%d. input : %d\n%sft_itoa => %s\n\n", white, i++, nb, green,
		ft_itoa(nb));
	nb = 2147483647;
	printf("%s%d. input : %d\n%sft_itoa => %s\n\n", white, i++, nb, green,
		ft_itoa(nb));
	nb = 42;
	printf("%s%d. input : %d\n%sft_itoa => %s\n\n", white, i++, nb, green,
		ft_itoa(nb));
}