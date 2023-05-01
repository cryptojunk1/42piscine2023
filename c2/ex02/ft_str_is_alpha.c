/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 18:13:38 by rmessner          #+#    #+#             */
/*   Updated: 2023/05/01 13:22:37 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
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
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_str_is_alpha("asbdjkafZHghlkgsldslkdf"));
	printf("%d\n", ft_str_is_alpha("ajsfklafjlafj2jfaokfjof"));
	printf("%d\n", ft_str_is_alpha("DJHFLASFLAFN"));
	printf("%d\n", ft_str_is_alpha("319247102014"));
	printf("%d\n", ft_str_is_alpha(""));
}
*/