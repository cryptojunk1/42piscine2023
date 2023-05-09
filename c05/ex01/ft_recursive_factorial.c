/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 09:41:00 by rmessner          #+#    #+#             */
/*   Updated: 2023/05/08 11:40:48 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	fac;

	fac = 1;
	if (nb > 0)
	{
		fac = fac * nb * ft_recursive_factorial(nb -1);
		nb--;
	}
	if (nb < 0)
		return (0);
	return (fac);
}

/*
int main(void)
{        
    printf("%d", ft_recursive_factorial(5));
    return (0);
}
*/