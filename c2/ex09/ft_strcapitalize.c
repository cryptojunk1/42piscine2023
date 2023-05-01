/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 17:32:16 by rmessner          #+#    #+#             */
/*   Updated: 2023/05/01 18:31:10 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	i1;

	i = 0;
	i1 = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i1 == 1)
			{
				str[i] -= 32;
				i1 = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			i1 = 0;
		else
		{
			i1 = 1;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = {"salut, comAment tu vas ? 42mots quarante-deux; cinquante+et+un"};
	printf("Old:\n%s\n", str);
	printf("New:\n%s\n", ft_strcapitalize(str));
}
*/