/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwayenbo <dwayenbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 07:45:46 by dwayenbo          #+#    #+#             */
/*   Updated: 2023/11/15 07:59:13 by dwayenbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/ft_printf.h"
#include  <stdio.h>
int main(void)
{
int i;
int j;

i = ft_printf("Dec = '%-15.42d', Percent '%%', integer '%-15.42i', uint '%u', ptr '%.p', hex min '%x', hex maj '%X', char '%c', str '%s'", 42, 42, 42, (void*)-1, (unsigned int) -1, (unsigned int) -2, 'Z', "ZZZZZz");
printf("\noutput = %d\n", i);
j = printf("Dec = '%-15.42d', Percent '%%', integer '%-15.42i', uint '%u', ptr '%.p', hex min '%x', hex maj '%X', char '%c', str '%s'", 42, 42, 42, (void*)-1, (unsigned int) -1, (unsigned int) -2, 'Z', "ZZZZZz");
printf("\noutput = %d\n", j);

}