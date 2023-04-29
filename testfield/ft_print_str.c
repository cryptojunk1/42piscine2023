/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 14:28:39 by rmessner          #+#    #+#             */
/*   Updated: 2023/04/29 15:27:39 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str1)
{
	int	l;

	l = 0;
	while (str1[l] != '\0')
	{
		l++;
	}
	write(1, str1, l);
}

int	main(void)
{
	char *str1;

    str1 = "Hallo Welt!";

        ft_putstr(str1);
    return (0);
}