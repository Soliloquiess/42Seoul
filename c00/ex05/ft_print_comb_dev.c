
#include <stdio.h>

void ft_putchar(char c);
void ft_write_finish(char a, char b, char c);
void ft_write(char a, char b, char c);
void ft_print_comb(void);


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);

	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_write_finish(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);

	ft_putchar(' ');
}



void ft_print_comb(void)
{
	char i, j, k;

	for (char i = '0'; i <= '7'; ++i)
	{
		for (char j = i + 1; j <= '8'; ++j)
		{
			for (char k = j + 1; k <= '9'; ++k)
			{
				if (i == '7' && j == '8' && k == '9')
				{

					ft_write_finish(i, j, k);
				}
				else
				{
					ft_write(i, j, k);
				}
			}
		}

	}
}
int		main(void)
{
	ft_print_comb();
}
