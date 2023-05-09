/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 00:35:25 by rmessner          #+#    #+#             */
/*   Updated: 2023/05/09 09:43:03 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	res;

	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	res = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (res);
}

/*
int main()
{        
    printf("%d", ft_fibonacci(1));
       return (0);
}
*/