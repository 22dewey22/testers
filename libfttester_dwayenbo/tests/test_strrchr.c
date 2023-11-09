/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/09 08:53:09 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"


void	print_strrchr(void)
{
	char *str = "coucou ca va la team??";
	char *func = "strrchr";
	int to_find = ' ';
	int j = 1;
	
	printf("%s%d. input : str = '%s', to find ='%c'\n%s%s =>    %s%s\nft_%s => %s\n\n", white, j++, str, to_find, blue, func, strrchr(str, to_find), green, func,  ft_strrchr(str, to_find));
	to_find = '?';
	printf("%s%d. input : str = '%s', to find ='%c'\n%s%s =>    %s%s\nft_%s => %s\n\n", white, j++, str, to_find, blue, func, strrchr(str, to_find), green, func,  ft_strrchr(str, to_find));
	str = "abcdef";
	printf("%s%d. input : str = '%s', to find ='%c'\n%s%s =>    %s%s\nft_%s => %s\n\n", white, j++, str, to_find, blue, func, strrchr(str, to_find), green, func,  ft_strrchr(str, to_find));
//INTENDED SEG FAULT
	// str = 0;
	// printf("%s%d. input : str = '%s', to find ='%c'\n%s%s =>    %s%s\nft_%s => %s\n\n", white, j++, str, to_find, blue, func, ft_strrchr(str, to_find), green, func,  ft_strrchr(str, to_find));
	str = "abcdef";
	printf("%s%d. input : str = '%s', to find ='%c'\n%s%s =>    %s%s\nft_%s => %s\n\n", white, j++, str, to_find, blue, func, strrchr(str, to_find), green, func,  ft_strrchr(str, to_find));
	
}