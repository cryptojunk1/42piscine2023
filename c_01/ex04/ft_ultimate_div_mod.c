/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:56:17 by rmessner          #+#    #+#             */
/*   Updated: 2023/04/26 16:18:35 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
        *a = *a / *b;
        *b = *a % *b;
}
/*
int     main()
{
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    ft_ultimate_div_mod(&a, &b);
    printf("a is now:%d\nb is now:%d\n", a, b);
    return 0;
}
*/