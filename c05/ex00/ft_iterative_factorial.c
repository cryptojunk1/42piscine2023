/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 08:22:47 by rmessner          #+#    #+#             */
/*   Updated: 2023/05/08 11:41:15 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fac;

	fac = 1;
	while (nb > 0)
	{
		fac *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (fac);
}

/*
int main(void)
{
    int num = 5;
        
    printf("%d", ft_iterative_factorial(num));
    return (0);
}
*/