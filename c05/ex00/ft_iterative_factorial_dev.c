
#include <unistd.h>

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		result;

	i = 1;
	result = 1;
	if (nb < 0 || nb >= 13)
		return (0);
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}


int main(void)
{
	printf("%d, %d\n", 1, ft_iterative_factorial(1));
	printf("%d, %d\n", 2, ft_iterative_factorial(2));
	printf("%d, %d\n", 3, ft_iterative_factorial(3));
	printf("%d, %d\n", 4, ft_iterative_factorial(4));
	printf("%d, %d\n", 5, ft_iterative_factorial(5));
	printf("%d, %d\n", -1, ft_iterative_factorial(-1));
	printf("%d, %d\n", -2, ft_iterative_factorial(-2));
	printf("%d, %d\n", -3, ft_iterative_factorial(-3));
	printf("%d, %d\n", -4, ft_iterative_factorial(-4));
	printf("%d, %d\n", 0, ft_iterative_factorial(0));

	return 0;
}
