/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/08 09:49:49 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

void	print_bzero(void)
{
	int i = 1;
	char *str = "BONJOUR";
	char *str2 = strdup("BONJOUR");
	char *str3 = strdup("BONJOUR");

	bzero(str2, 5);
	ft_bzero(str3, 5);
	printf("%s%d. input : %s\n%sbzero =>    %s%s\nft_bzero => %s\n\n", white, i++,
		str, blue, str2, green, str3);
	printf("%s%d. input : 5 bits plus loin\n%sbzero =>    %s%s\nft_bzero => %s\n",
		white, i++, blue, str2 + 5, green, str3 + 5);
}