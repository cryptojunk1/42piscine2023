/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:45:40 by rmessner          #+#    #+#             */
/*   Updated: 2023/04/25 15:59:53 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr);

void	ft_putchar(char c)
{
		write(1, &c, 1);
}


void	ft_printnbr(int nbr)
{
		int a = 42;
		write(1, &nbr, 2)
}



int		main()
{
		ft_printnbr();
		ft_putchar('/n');
		ft_ft();
		return 0;
}
