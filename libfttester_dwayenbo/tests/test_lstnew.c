/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/09 13:22:37 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

void	print_lstnew(void)
{
	char *str = "coucou ca va la team?? ";
	char *str2 = "oklm";
	t_list *begin;

	begin = ft_lstnew(str2);
	printf("%sElem rempli\n%s", white, green);
	print_list(begin);
	free(begin);
	begin = ft_lstnew(0);
	printf("\n%sStr null\n%s", white, green);
	print_list(begin);
	begin = ft_lstnew("");
	printf("\n%sStr vide\n%s", white, green);
	print_list(begin);
}