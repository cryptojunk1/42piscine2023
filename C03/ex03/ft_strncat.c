/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:58:29 by rmessner          #+#    #+#             */
/*   Updated: 2023/05/02 11:27:30 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	si;

	i = 0;
	si = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (si < nb && src[i] != '\0')
	{
		dest[i + si] = src[si];
		si++;
	}
	dest[i + si] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char dest[20] = {"Hello "};
	char src[] = {"World"};
	printf("%s", ft_strncat(dest, src, 20));
}
*/