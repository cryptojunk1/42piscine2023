/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 05:30:53 by rmessner          #+#    #+#             */
/*   Updated: 2023/05/04 05:52:48 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*proname = argv[0];
	int	i;

	i = 0;
	while (proname[i] != '\0')
	{
		i++;
	}
	write(1, proname, i);
	write(1, "\n", 1);
	//printf("Das ist mein Name: %s\n", argv[0]);
	return (0);
}
