
#include <unistd.h>


void ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tmp;

	i = 0;
	while (i < size)
	{
		--size;
		tmp = tab[i];
		tab[i++] = tab[size];
		tab[size] = tmp;
	}
}
int main(void)
{
	int str[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int size = 10;

	ft_rev_int_tab(str, size);

	for(int i = 0; i < 10; i++)
	{
		printf("%d ", str[i]);
	}
}
