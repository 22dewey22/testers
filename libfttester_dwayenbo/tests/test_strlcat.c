/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/09 07:21:32 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

void	print_strlcat(void)
{
	char *str = "coucou ca va la team?? ";
	char *func = "strlcat";
	int 	j = 1;
	char *str2 = calloc(150, 1);
	char *str3 = calloc(150, 1);

	size_t size = 12;
	printf("%s%d. input : dest = '%s', src = '%s', size = %ld\n", white, j++, str2, str, size);
	size_t retour = strlcat(str2, str, size);
	printf("%s%s=>   retour = %ld, dest = '%s'\n", green, func, retour, str2);
	size_t retour_ft = ft_strlcat(str3, str, size);
	printf("%sft_%s=>retour = %ld, dest = '%s'\n", blue, func, retour_ft, str3);
	
	size = 30;
	printf("%s%d. input : dest = '%s', src = '%s', size = %ld\n", white, j++, str2, str, size);
	retour = strlcat(str2, str, size);
	printf("%s%s=>   retour = %ld, dest = '%s'\n", green, func, retour, str2);
	retour_ft = ft_strlcat(str3, str, size);
	printf("%sft_%s=>retour = %ld, dest = '%s'\n", blue, func, retour_ft, str3);	

	size = 0;
	printf("%s%d. input : dest = '%s', src = '%s', size = %ld\n", white, j++, str2, str, size);
	retour = strlcat(str2, str, size);
	printf("%s%s=>   retour = %ld, dest = '%s'\n", green, func, retour, str2);
	retour_ft = ft_strlcat(str3, str, size);
	printf("%sft_%s=>retour = %ld, dest = '%s'\n", blue, func, retour_ft, str3);

	size = 15;
	printf("%s%d. input : dest = '%s', src = '%s', size = %ld\n", white, j++, str2, str, size);
	retour = strlcat(str2, str, size);
	printf("%s%s=>   retour = %ld, dest = '%s'\n", green, func, retour, str2);
	retour_ft = ft_strlcat(str3, str, size);
	printf("%sft_%s=>retour = %ld, dest = '%s'\n", blue, func, retour_ft, str3);

	size = 150;
	printf("%s%d. input : dest = '%s', src = '%s', size = %ld\n", white, j++, str2, str, size);
	retour = strlcat(str2, str, size);
	printf("%s%s=>   retour = %ld, dest = '%s'\n", green, func, retour, str2);
	retour_ft = ft_strlcat(str3, str, size);
	printf("%sft_%s=>retour = %ld, dest = '%s'\n", blue, func, retour_ft, str3);

//TEST SEGFAULT VOLONTAIRE
	// size = 30;
	// printf("%s%d. input : dest = '%s', src = '%s', size = %ld\n", white, j++, str2, str, size);
	// str2 = 0;
	// str3 = 0;
	// retour = strlcat(str2, str, size);
	// printf("%s%s=>   retour = %ld, dest = '%s'\n", green, func, retour, str2);
	// retour_ft = ft_strlcat(str3, str, size);
	// printf("%sft_%s=>retour = %ld, dest = '%s'\n", blue, func, retour_ft, str3);

// TEST SEGFAULT VOLONTAIRE
	// size = 30;
	// printf("%s%d. input : dest = '%s', src = '%s', size = %ld\n", white, j++, str2, str, size);
	// str = 0;
	// retour = strlcat(str2, str, size);
	// printf("%s%s=>   retour = %ld, dest = '%s'\n", green, func, retour, str2);
	// retour_ft = ft_strlcat(str3, str, size);
	// printf("%sft_%s=>retour = %ld, dest = '%s'\n", blue, func, retour_ft, str3);
free(str2);
free(str3);
}