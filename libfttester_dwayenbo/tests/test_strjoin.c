/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/09 06:48:39 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

void	print_strjoin(void)
{
	char *str = "coucou ca va la team?? ";
	char *func = "strjoin";
	char *str2 = "Ouais nickel merci";
	char *str3 = ft_strjoin(str, str2);
	int j = 1;

	printf("%s%d. input : str1 = '%s' str2 = '%s'\n%s%s =>'%s'%s\n\n", white,
		j++, str, str2, green, func, str3, white);
	free(str3);
	// str = 0;

	str = "";
	str3 = ft_strjoin(str, str2);
	printf("%s%d. input : str1 = '%s' str2 = '%s'\n%s%s =>'%s'%s\n\n", white,
		j++, str, str2, green, func, str3, white);
	free(str3);
	str = 0;
	str3 = ft_strjoin(str, str2);
	printf("%s%d. input : str1 = '%s' str2 = '%s'\n%s%s =>'%s'%s\n\n", white,
		j++, str, str2, green, func, str3, white);
	if (str3)
		free(str3);
	str2 = 0;
	str3 = ft_strjoin(str, str2);
	printf("%s%d. input : str1 = '%s' str2 = '%s'\n%s%s =>'%s'%s\n\n", white,
		j++, str, str2, green, func, str3, white);
	if (str3)
		free(str3);
}