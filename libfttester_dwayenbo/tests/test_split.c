/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:52 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/08 19:25:34 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"


void	print_split(void)
{
	char *str = "coucou ca va la team?? ";
	char **output;
	char splitter = ' ';
	int i = 0;
	int j = 1;
	
	output = ft_split(str, splitter);
	printf("%s%d.inputs =>str = %s, splitter = '%c'%s\n", white, j++, str, splitter, green);
	while (output[i])
	{
		printf("output[%d] = %s\n", i, output[i]);
		free(output[i]);
		i++;
	}
	printf("output[%d] = %s\n\n", i, output[i]);
	free(output[i]);
	free(output);
	str = 0;
	splitter = 'k';
	output = ft_split(str, splitter);
	i = 0;
	printf("%s%d.inputs =>str = %s, splitter = '%c'%s\n", white, j++, str, splitter, green);
	while (output[i])
	{
		printf("output[%d] = %s\n", i, output[i]);
		free(output[i]);
		i++;
	}
	printf("output[%d] = %s\n\n", i, output[i]);
	free(output[i]);
	free(output);
	str = "dhsdfufshduds";
	splitter = 'k';
	output = ft_split(str, splitter);
	i = 0;
	printf("%s%d.inputs =>str = %s, splitter = '%c'%s\n", white, j++, str, splitter, green);
	while (output[i])
	{
		printf("output[%d] = %s\n", i, output[i]);
		free(output[i]);
		i++;
	}
	printf("output[%d] = %s\n\n", i, output[i]);
	free(output[i]);
	free(output);
	str = "kkkkkkk";
	splitter = 'k';
	output = ft_split(str, splitter);
	i = 0;
	printf("%s%d.inputs =>str = %s, splitter = '%c'%s\n", white, j++, str, splitter, green);
	while (output[i])
	{
		printf("output[%d] = %s\n", i, output[i]);
		free(output[i]);
		i++;
	}
	printf("output[%d] = %s\n\n", i, output[i]);
	free(output[i]);
	free(output);
}