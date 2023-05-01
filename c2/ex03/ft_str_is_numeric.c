/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 12:32:21 by rmessner          #+#    #+#             */
/*   Updated: 2023/05/01 14:19:41 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_numeric("135878546218464"));
	printf("%d\n", ft_str_is_numeric("13587852d18464"));
	printf("%d\n", ft_str_is_numeric("dssfjlsfps()3"));
	printf("%d\n", ft_str_is_numeric(""));
}
*/