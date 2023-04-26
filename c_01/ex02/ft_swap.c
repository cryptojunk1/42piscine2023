/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:52:26 by rmessner          #+#    #+#             */
/*   Updated: 2023/04/26 15:34:04 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int i;
    i = *a;
    *a = *b;
    *b = i;
}
/*
int     main()
{
    int a = 100;
    int b = 50;
    ft_swap(&a, &b);
    printf("%d\n%d", a,b);
    return 0;
}
*/