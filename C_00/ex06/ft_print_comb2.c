/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 09:02:51 by rmessner          #+#    #+#             */
/*   Updated: 2023/04/26 10:23:38 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_putsk(char c)
{
	if ((c / 10 != 9) || (c % 10 != 8))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 0;
	while (num1 < 100)
	{
		num2 = num1 + 1;
		while (num2 < 100)
		{
			ft_putchar(num1 / 10 + '0');
			ft_putchar(num1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(num2 / 10 + '0');
			ft_putchar(num2 % 10 + '0');
			ft_putsk(num1);
			num2++;
		}
		num1++;
	}
}

/*
int		main()
{
		ft_print_comb2();
}
*/
