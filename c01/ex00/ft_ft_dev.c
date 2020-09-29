#include <unistd.h>


void	ft_ft(int *nbr)
{ 
	*nbr = 42;//역참조
} 



int		main(void)
{
	int a;

	a = 1;
	printf("before: %d\n", a);
	ft_ft(&a); 
	printf("after : %d\n", a);
}
