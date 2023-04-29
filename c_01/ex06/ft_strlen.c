/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 09:32:12 by rmessner          #+#    #+#             */
/*   Updated: 2023/04/29 19:31:53 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	leng;

	leng = 0;
	while (*str != '\0')
	{
		leng++;
		str++;
	}
	return (leng);
}
/*
int	main(void)
{
	char	string[] = {"Hallo Welt"};
	int		leng;

	leng = ft_strlen(string);
	printf("%d", leng);
	return (0);
}
*/