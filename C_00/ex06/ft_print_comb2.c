#include <unistd.h>


void	ft_putchar(char c)
{
		write(1, &c, 1);

}

void	ft_putks(char a, char b)
{
		if((a / 10 != 9) || (a % 10 != 8))
		write(1, &a, 1);
		write(1, &b, 1);
}



void	ft_print_comb2(void)
{
		int num1;
		int num2;
		num1 = 0;
		num2 = 0;
		while(num1 < 100)
		{
				num2 = num1 + 1;
				while(num2 < 100)
				{
					ft_putchar(num1 / 10 + '0');
					ft_putchar(num1 % 10 + '0');
					ft_putchar(' ');
					ft_putchar(num2 / 10 + '0');
					ft_putchar(num2 % 10 + '0');
					ft_putks(',', ' ');
				num2++;
				}
		num1++;
		}
}


int		main()
{
		ft_print_comb2();
}
