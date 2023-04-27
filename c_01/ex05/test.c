/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 09:21:56 by rmessner          #+#    #+#             */
/*   Updated: 2023/04/27 09:28:31 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
    int l = 0;

    while(str[l] != '\0')
    {
        l++;
    }
    write(1, str, l);

}

int     main()
{
    char *mystr = "Hallo liebe Welt!\n";
    ft_putstr(mystr);
}