/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pustr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 08:44:06 by rmessner          #+#    #+#             */
/*   Updated: 2023/05/04 07:52:23 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while(*str != '\0')
    {
        ft_putchar(*str);
        str++;
    }

}

int     main(void)
{
    char str[] = "Hallo";
    ft_putstr(str);
    return 0;
}