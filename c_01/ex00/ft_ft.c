/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:40:44 by rmessner          #+#    #+#             */
/*   Updated: 2023/04/26 11:50:44 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void		ft_ft2(int **nbr)
{
		**nbr += 1;		
}

void		ft_ft(int *nbr)
{
		*nbr = 42;
		ft_ft2(&nbr);		
}
/*
int		main()
{
	int nbr = 41;
	ft_ft(&nbr);
	printf("%d\n", nbr);
	return 0;
}
*/
