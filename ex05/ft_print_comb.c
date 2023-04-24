/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 09:49:39 by rmessner          #+#    #+#             */
/*   Updated: 2023/04/24 14:17:41 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	print_num(char a, char b, char c)	{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if(a != '7' || b != '8' || c != '9')	{
						write(1, ", ", 2);
				}

}



void	ft_print_comb(void)	{
				
				char a;
				char b;
				char c;
				
				a = '0';
				while(a <= '7')	{
						b = a + 1;
						while(b <= '8')	{
									
									c = b + 1;
									while(c <= '9')	{
									print_num(a, b, c);
									c++;
									}
						b++;
						}

				
				a++;
				}
				write(1, "\n", 1);
}




int		main(void)	{
			ft_print_comb();
			return 0;
}



