
#include <stdio.h>
#include <limits.h>

int	ft_find_next_prime(int nb)
{
	int	result;
	int next_prime;
	int okay;

	okay = 1;
	if (nb % 2 == 0 || nb == 1)
		next_prime = nb + 1;
	else
		next_prime = nb + 2;
	while (!okay)
	{
		result = 2;
		while (next_prime % result != 0)
			if (result++ > nb)
				break ;
		if (result == next_prime)
			okay = 0;
		else
			next_prime += 2;
	}
	return (next_prime);
}

int	ft_find_next_prime(int nb);
int	main(void)
{
	printf("%d\n", ft_find_next_prime(2147483645));
}
