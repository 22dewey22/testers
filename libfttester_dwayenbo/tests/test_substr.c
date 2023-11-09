/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/09 09:23:11 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"


void	print_substr(void)
{
	char *str = "????cou??cou ca va la team??";
	unsigned int start = 4;
	size_t len = 3;
	int j = 1;
	
	printf("%s%d. input : str = '%s', start =%d, len = %lu\n%s%s =>'%s'%s\n%s => '%s'\n\n",
	white, j++, str, start, len, blue, "BEFORE", str, green, "AFTER ",  ft_substr(str, start, len));
	str = "????cou??cou ca va la team??";
	start = 4;
	len = 0;	
	printf("%s%d. input : str = '%s', start =%d, len = %lu\n%s%s =>'%s'%s\n%s => '%s'\n\n",
	white, j++, str, start, len, blue, "BEFORE", str, green, "AFTER ",  ft_substr(str, start, len));
	str = "";
	start = 400;
	len = 300;	
	printf("%s%d. input : str = '%s', start =%d, len = %lu\n%s%s =>'%s'%s\n%s => '%s'\n\n",
	white, j++, str, start, len, blue, "BEFORE", str, green, "AFTER ",  ft_substr(str, start, len));
	str = 0;
	start = 4;
	len = 3;
	printf("%s%d. input : str = '%s', start =%d, len = %lu\n%s%s =>'%s'%s\n%s => '%s'\n\n",
	white, j++, str, start, len, blue, "BEFORE", str, green, "AFTER ",  ft_substr(str, start, len));
	str = "????cou??cou ca va la team??";
	start = 4;
	len = 400;	
	printf("%s%d. input : str = '%s', start =%d, len = %lu\n%s%s =>'%s'%s\n%s => '%s'\n\n",
	white, j++, str, start, len, blue, "BEFORE", str, green, "AFTER ",  ft_substr(str, start, len));
	str = "????cou??cou ca va la team??";
	start = 400;
	len = 400;	
	printf("%s%d. input : str = '%s', start =%d, len = %lu\n%s%s =>'%s'%s\n%s => '%s'\n\n",
	white, j++, str, start, len, blue, "BEFORE", str, green, "AFTER ",  ft_substr(str, start, len));



}