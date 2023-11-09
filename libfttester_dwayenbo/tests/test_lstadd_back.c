/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/09 10:34:02 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

void	print_lstadd_back(void)
{
	char *str = "coucou ca va la team?? ";
	char *str2 = "oklm";
	t_list *begin;

	begin = 0;
	printf("%sLIST BEFORE\n%s", white, green);
	print_list(begin);
	printf("\n%sFirst add\n%s", white, green);
	ft_lstadd_back(&begin, ft_lstnew(str));
	print_list(begin);
	printf("\n%sSecond add\n%s", white, green);
	ft_lstadd_back(&begin, ft_lstnew(str2));
	print_list(begin);
	printf("\n%sAdd NULL\n%s", white, green);
	ft_lstadd_back(&begin, 0);
	print_list(begin);
}