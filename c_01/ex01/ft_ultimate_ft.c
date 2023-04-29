/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 09:31:51 by rmessner          #+#    #+#             */
/*   Updated: 2023/04/29 19:11:34 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr += 1;
}
/*
void	eightptr(int ********nbr)
{
	********nbr += 1;
	ft_ultimate_ft(&nbr);
}

void	sevptr(int *******nbr)
{
	*******nbr += 10;
	eightptr(&nbr);
}

void	sixptr(int ******nbr)
{
	******nbr += 20;
	sevptr(&nbr);
}

void	fiveptr(int *****nbr)
{
	*****nbr += 2;
	sixptr(&nbr);
}

void	fourptr(int ****nbr)
{
	****nbr += 2;
	fiveptr(&nbr);
}

void	thirptr(int ***nbr)
{
	***nbr += 2;
	fourptr(&nbr);
}

void	secptr(int **nbr)
{
	**nbr += 2;
	thirptr(&nbr);
}

void	firstptr(int *nbr)
{
	*nbr = 2;
	secptr(&nbr);
}

#include <stdio.h>

int	main(void)
{
	int	nbr;

	firstptr(&nbr);
	printf("%d\n", nbr);
	return (0);
}
*/