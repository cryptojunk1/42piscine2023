/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 12:43:54 by rmessner          #+#    #+#             */
/*   Updated: 2023/05/01 13:27:18 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	printf("%d\n", ft_str_is_lowercase("dkjfskdjsldfjsdfk"));
	printf("%d\n", ft_str_is_lowercase("ksjdfksjdfkdDsd"));
	printf("%d\n", ft_str_is_lowercase("kafjaskfa9898asd"));
	printf("%d\n", ft_str_is_lowercase(""));
}
*/
