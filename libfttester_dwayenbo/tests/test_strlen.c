/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/09 07:42:09 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"


void	print_strlen(void)
{
	char *str = "coucou ca va la team?? ";
	char *func = "strlen";
	int j = 1;
	
	printf("%s%d. input : str = '%s'\n%s%s =>    len = %d%s\nft_%s => len = %d%s\n\n", 
	white, j++, str, blue, func, strlen(str), green, func,  ft_strlen(str), white);
//INTENDED SEGFAULT
	// str = 0;
	// printf("%s%d. input : str = '%s'\n%s%s =>    len = %d%s\nft_%s => len = %d%s\n\n", 
	// white, j++, str, blue, func, ft_strlen(str), green, func,  ft_strlen(str), white);
	str = "";
	printf("%s%d. input : str = '%s'\n%s%s =>    len = %d%s\nft_%s => len = %d%s\n\n", 
	white, j++, str, blue, func, strlen(str), green, func,  ft_strlen(str), white);

}