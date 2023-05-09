/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 09:54:41 by rmessner          #+#    #+#             */
/*   Updated: 2023/05/08 12:28:02 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i++;
	}
	return (1);
}

/*
int main()
{        
    printf("%d", ft_is_prime(10));
	printf("%d", ft_is_prime(23));
	printf("%d", ft_is_prime(13));
	printf("%d", ft_is_prime(21));
	printf("%d", ft_is_prime(97));
	printf("%d", ft_is_prime(12315));

       return (0);
}
*/