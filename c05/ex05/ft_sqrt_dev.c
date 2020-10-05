
#include <stdio.h>
#include <limits.h>

int	ft_sqrt(int nb)
{
	unsigned int		sqrt;
	unsigned int		index;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	index = 0;
	while ((sqrt = index * index) <= (unsigned int)nb)
		index++;
	index -= 1;
	return (index * index == (unsigned int)nb ? index : 0);
}


int main(void)
{
	for(int i = -4; i < 20; i++)
		printf("%d, %d\n", i, ft_sqrt(i));
	return 0;
}
