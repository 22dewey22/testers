/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/09 12:24:30 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

void	print_lstclear(void)
{
	char *str = "coucou ca va la team?? ";
	char *str2 = "oklm";
	t_list *begin;
	t_list *to_del;
	to_del = ft_lstnew(strdup("bye !!"));
	t_list *after_to_del;
	after_to_del = ft_lstnew(strdup("after"));
	t_list *before_to_del;
	before_to_del = ft_lstnew(strdup("before"));

	begin = 0;
	printf("%sLIST BEFORE\n%s", white, green);
		// printf("\n%sFirst add\n%s", white, green);
	ft_lstadd_back(&begin, ft_lstnew(strdup(str)));
	// print_list(begin);
	// printf("\n%sSecond add\n%s", white, green);
	ft_lstadd_back(&begin, before_to_del);
	ft_lstadd_back(&begin, to_del);
	ft_lstadd_back(&begin, after_to_del);
	print_list(begin);
	printf("%sLIST AFTER\n%s", white, green);
	ft_lstclear(&begin, &free);
	print_list(begin);

}