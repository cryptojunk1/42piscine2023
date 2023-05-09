/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 01:20:01 by rmessner          #+#    #+#             */
/*   Updated: 2023/05/08 12:13:20 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	nbr;

	nbr = nb;
	if (nbr <= 0)
		return (0);
	if (nbr == 1)
		return (1);
	i = 2;
	if (nbr >= 2)
	{
		while (i * i <= nbr)
		{
			if (i * i == nbr)
				return (i);
			i++;
		}
	}
	return (0);
}

/*
int main()
{        
    printf("%d", ft_sqrt(2147395600));
	printf("\n");
	printf("%d", ft_sqrt(9));
       return (0);
}
*/