/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:09:56 by rmessner          #+#    #+#             */
/*   Updated: 2023/04/29 12:54:31 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	l;
	int	r;
	int	temp;

	r = size - 1;
	l = 0;
	while (l < r)
	{
		temp = tab[l];
		tab[l] = tab[r];
		tab[r] = temp;
		l++;
		r--;
	}
}
/*
int	main(void)
{
	int	tab[] = {1,2,3,4,5};
	int	size = sizeof(tab) / sizeof(tab[0]);

	ft_rev_int_tab(tab, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", tab[i]);
	}
	return (0);
}
*/