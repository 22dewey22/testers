/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/08 22:28:49 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"


void	print_strdup(void)
{
	char *str = "coucou ca va la team?? ";
	char *func = "strdup";
	char *str2 = strdup(str);
	char *str3 = ft_strdup(str);
	int j = 1;
	
	printf("%s%d. input : str = '%s'\n%s%s =>    '%s'%s\nft_%s => '%s'\n\n", white, j++, str, blue, func, str2, green, func, str3);
	free(str2);
	free(str3);
	// str = 0;
	str = "";
	str2 = strdup(str);
	str3 = ft_strdup(str);
	printf("%s%d. input : str = '%s'\n%s%s =>    '%s'%s\nft_%s => '%s'\n\n", white, j++, str, blue, func, str2, green, func, str3);

}