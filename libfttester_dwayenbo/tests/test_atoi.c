/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/09 10:13:47 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

void	print_atoi(void)
{
	int i = 1;
	char *str = "-2147483648";

	printf("%s%d. input : %s\n%satoi =>    %d%s\nft_atoi => %d\n\n", white, i++,
		str, blue, atoi(str), green, ft_atoi(str));
	str = "0";
	printf("%s%d. input : %s\n%satoi =>    %d%s\nft_atoi => %d\n\n", white, i++,
		str, blue, atoi(str), green, ft_atoi(str));
	str = "2147483647";
	printf("%s%d. input : %s\n%satoi =>    %d%s\nft_atoi => %d\n\n", white, i++,
		str, blue, atoi(str), green, ft_atoi(str));
	str = "42";
	printf("%s%d. input : %s\n%satoi =>    %d%s\nft_atoi => %d\n", white, i++,
		str, blue, atoi(str), green, ft_atoi(str));
	str = "-dfdf";
	printf("%s%d. input : %s\n%satoi =>    %d%s\nft_atoi => %d\n", white, i++,
		str, blue, atoi(str), green, ft_atoi(str));
	str = "--142";
	printf("%s%d. input : %s\n%satoi =>    %d%s\nft_atoi => %d\n", white, i++,
		str, blue, atoi(str), green, ft_atoi(str));
	str = "++142";
	printf("%s%d. input : %s\n%satoi =>    %d%s\nft_atoi => %d\n", white, i++,
		str, blue, atoi(str), green, ft_atoi(str));
	str = "+ 142";
	printf("%s%d. input : %s\n%satoi =>    %d%s\nft_atoi => %d\n", white, i++,
		str, blue, atoi(str), green, ft_atoi(str));
}