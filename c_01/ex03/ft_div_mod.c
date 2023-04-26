/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:36:30 by rmessner          #+#    #+#             */
/*   Updated: 2023/04/26 15:53:11 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
        *div = a / b;
        *mod = a % b;

}
/*
int     main()
{
    int a = 100;
    int b = 20;
    int div;
    int mod;

    ft_div_mod(a, b, &div, &mod);
    printf("Div: %d\n", div);
    printf("Mod: %d\n", mod);
    return 0;
}
*/