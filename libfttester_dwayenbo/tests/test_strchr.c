/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/08 22:23:55 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"


void	print_strchr(void)
{
	char *str = "coucou ca va la team?? ";
	char *func = "strchr";
	int to_find = ' ';
	int j = 1;
	
	printf("%s%d. input : str = '%s', to find ='%c'\n%s%s =>    %s%s\nft_%s => %s\n\n", white, j++, str, to_find, blue, func, strchr(str, to_find), green, func,  ft_strchr(str, to_find));
	to_find = '?';
	printf("%s%d. input : str = '%s', to find ='%c'\n%s%s =>    %s%s\nft_%s => %s\n\n", white, j++, str, to_find, blue, func, strchr(str, to_find), green, func,  ft_strchr(str, to_find));
	str = "abcdef";
	printf("%s%d. input : str = '%s', to find ='%c'\n%s%s =>    %s%s\nft_%s => %s\n\n", white, j++, str, to_find, blue, func, strchr(str, to_find), green, func,  ft_strchr(str, to_find));
	
}