/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/09 09:10:53 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"


void	print_strtrim(void)
{
	char *str = "????cou??cou ca va la team??";
	char *func = "strtrim";
	char *to_trim = " !?";
	int j = 1;
	
	printf("%s%d. input : str = '%s', to_trim ='%s'\n%s%s =>'%s'%s\n%s => '%s'\n\n",
	white, j++, str, to_trim, blue, "BEFORE", str, green, "AFTER ",  ft_strtrim(str, to_trim));
	str = "??????";
	to_trim = "?";
	printf("%s%d. input : str = '%s', to_trim ='%s'\n%s%s =>'%s'%s\n%s => '%s'\n\n",
	white, j++, str, to_trim, blue, "BEFORE", str, green, "AFTER ",  ft_strtrim(str, to_trim));
	str = 0;
	to_trim = "?";
	printf("%s%d. input : str = '%s', to_trim ='%s'\n%s%s =>'%s'%s\n%s => '%s'\n\n",
	white, j++, str, to_trim, blue, "BEFORE", str, green, "AFTER ",  ft_strtrim(str, to_trim));



}