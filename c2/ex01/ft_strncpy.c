/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:34:09 by rmessner          #+#    #+#             */
/*   Updated: 2023/05/01 18:42:57 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
		dest[i] = '\0';
		i++;
	return (dest);
}


#include <stdio.h>

int	main()
{
	char src[] = {"Hallo liebe Welt!"};
	char dest[25];

	printf("%s\n", src);
	printf("%s\n", ft_strncpy(dest, src, 3));
	printf("%s\n", ft_strncpy(dest, src, 18));
	return (0);
}
