/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstiter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/09 12:38:36 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

static void	aff_cont(void *content)
{
	ft_putendl_fd((char *)content, 1);
}
void	print_lstiter(void)
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
	printf("%sAppel de list_iter avec un genre de putstr\n%s", white, green);
	ft_putstr_fd(green, 1);
	ft_lstiter(begin, &aff_cont);
}