/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/09 14:13:13 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

static char	*plus_one(void *content)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = strdup((char *)content);
	while (ptr[i])
	{
		ptr[i++] += 1;
	}
	return (ptr);
}
void	print_lstmap(void)
{
	char *str = "coucou ca va la team?? ";
	char *str2 = "oklm";
	t_list *begin;
	t_list *begin_mapped;

	begin = 0;

	ft_lstadd_back(&begin, ft_lstnew(str));
	ft_lstadd_back(&begin, ft_lstnew(str2));
	ft_lstadd_back(&begin, ft_lstnew("gnnnnnn"));
	printf("%sLIST BEFORE\n%s", white, green);
	print_list(begin);
	ft_putstr_fd("\n", 1);
	printf("%sNEW LIST\n%s", white, green);
	print_list(ft_lstmap(begin, (void *)&plus_one, &free));
	printf("\n");
	printf("%sLIST AFTER\n%s", white, green);
	print_list(begin);
}