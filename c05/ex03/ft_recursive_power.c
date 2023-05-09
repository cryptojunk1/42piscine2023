/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 22:27:50 by rmessner          #+#    #+#             */
/*   Updated: 2023/05/09 12:26:20 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power > 1)
	{
		return (nb * ft_recursive_power(nb, (power -1)));
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (res);
}
/*
int main(void)
{        
    printf("%d", ft_recursive_power(2,3));
       return (0);
}
*/