/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/09 10:55:49 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

void	print_lstdelone(void)
{
	char *str = "coucou ca va la team?? ";
	char *str2 = "oklm";
	t_list *begin;
	t_list *to_del;
	to_del = ft_lstnew(strdup("bye !!"));
	t_list *after_to_del;
	after_to_del = ft_lstnew("after");
	t_list *before_to_del;
	before_to_del = ft_lstnew("before");

	begin = 0;
	printf("%sLIST BEFORE\n%s", white, green);
		// printf("\n%sFirst add\n%s", white, green);
	ft_lstadd_back(&begin, ft_lstnew(str));
	// print_list(begin);
	// printf("\n%sSecond add\n%s", white, green);
	ft_lstadd_back(&begin, before_to_del);
	ft_lstadd_back(&begin, to_del);
	ft_lstadd_back(&begin, after_to_del);
	print_list(begin);
	printf("%sLIST AFTER\n%s", white, green);
	ft_lstdelone(to_del, &free);
	before_to_del->next = after_to_del;
	print_list(begin);

}