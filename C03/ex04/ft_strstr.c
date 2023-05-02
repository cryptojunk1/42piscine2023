/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:27:46 by rmessner          #+#    #+#             */
/*   Updated: 2023/05/02 12:39:52 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	ti;

	i = 0;
	ti = 0;
	while (str[i] != '\0')
	{
		while (str[i + ti] == to_find[ti] && str[i + ti])
		{
			ti++;
			if (to_find[ti] == '\0')
			{
				return (str + i);
			}
		}
		i++;
		ti = 0;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = {"alsdjHelaljHellonakncoa"};
	char	to_find[] ={"Hello"};

	printf("%s", ft_strstr(str, to_find));
}
*/