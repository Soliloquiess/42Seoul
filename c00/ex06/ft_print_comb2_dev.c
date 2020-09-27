
#include <stdio.h>
#include <stdbool.h>

void ft_putchar(char c);
void ft_write_comb(int a, int b);
void ft_print_comb2(void);
void ft_write_finish(int a, int b);


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_comb(int a, int b)
{
	ft_putchar(48 + a / 10);
	ft_putchar(48 + a % 10);
	ft_putchar(' ');
	ft_putchar(48 + b / 10);
	ft_putchar(48 + b % 10);
	ft_putchar(',');
	ft_putchar(' ');

	

}

void	ft_write_finish(int a, int b)
{
	ft_putchar(48 + a / 10);
	ft_putchar(48 + a % 10);
	
	ft_putchar(' ');
	ft_putchar(48 + b / 10);
	ft_putchar(48 + b % 10);

}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	for(a= 0; a<=99;a++)
	{
		b = a + 1;
		for (b =a+1; b<= 99 ; b++)
		{
			if (a == 98 && b == 99)
			{
				ft_write_finish(a, b);
			}
			else
			{
				ft_write_comb(a, b);
			}
		}
	}
}

int		main(void)
{
	ft_print_comb2();
}
