/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:32:44 by rmessner          #+#    #+#             */
/*   Updated: 2023/05/02 12:40:58 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	di;
	int	si;

	di = 0;
	while (dest[di] != '\0')
	{
		di++;
	}
	si = 0;
	while (src[si] != '\0')
	{
		dest[di] = src[si];
		di++;
		si++;
	}
	dest[di + si] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char dest[20] = {"Hello "};
	char src[] = {"World"};

	printf("%s", ft_strcat(dest, src));
}
*/