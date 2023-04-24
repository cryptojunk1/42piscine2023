/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:36:12 by rmessner          #+#    #+#             */
/*   Updated: 2023/04/22 18:08:48 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
		
		char pos;
		char neg;

		pos = 'P';
		neg = 'N';
		
		if(n >= 0)
		{
			write(1, &pos, 1);
		}
		else
		{
			write(1, &neg, 1);
		}
}

/*
int	main()
{
	ft_is_negative(-10);
}
*/
