/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 18:32:55 by rmessner          #+#    #+#             */
/*   Updated: 2023/05/01 14:17:11 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	if (size != '\0')
	{
		while (src[x] != '\0' && x < size)
		{
			dest[i] = src[x];
			i++;
			x++;
		}
		dest[i] = '\0';
	}			
	return (i);
}

/*
int	main()
{
	char src[] = {"Hello there"};
	char dest[] = {"iam here!"};

	printf("%s\n", src);
	printf("%d\t%s", ft_strlcpy(dest, src, 20), dest);
	return (0);
}
*/