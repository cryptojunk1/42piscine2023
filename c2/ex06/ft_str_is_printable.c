/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 13:11:31 by rmessner          #+#    #+#             */
/*   Updated: 2023/05/01 13:28:59 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	printf("%d\n", ft_str_is_printable("lkasfj9242!:"));
	printf("%d\n", ft_str_is_printable("sdsdsdsd"));
	printf("%d\n", ft_str_is_printable("\n\t"));
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable(" "));
}
*/