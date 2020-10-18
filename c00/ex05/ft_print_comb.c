#include <unistd.h>
#include <stdbool.h>

void	ft_write_comb(char a, char b, char c, bool last)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);

	if (last)
	{
		write(1, &",", 1);
		write(1, &" ", 1);
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;
	bool check;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				check = !(a == '7' && b == '8' && c == '9');
				ft_write_comb(a, b, c, check);
				c++;
			}
			b++;
		}
		a++;
	}
}
