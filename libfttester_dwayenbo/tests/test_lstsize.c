/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstsize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/09 13:10:26 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

void	print_lstsize(void)
{
	char *str = "coucou ca va la team?? ";
	char *str2 = "oklm";
	t_list *begin;

	begin = 0;

	ft_lstadd_back(&begin, ft_lstnew(str));
	ft_lstadd_back(&begin, ft_lstnew(str2));
	ft_lstadd_back(&begin, ft_lstnew("gnnnnnn"));
	printf("%sLIST BEFORE\n%s", white, green);
	print_list(begin);
	ft_putstr_fd("\n", 1);
	printf("%sLise size => '%d'\n\n", green,
		ft_lstsize(begin));
	printf("%sLIST NULL\n%s", white, green);
	printf("%sLise size => '%d'\n\n", green,
		ft_lstsize(0));
}