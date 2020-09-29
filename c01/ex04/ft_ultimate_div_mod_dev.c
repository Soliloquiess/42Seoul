#include <unistd.h>



void ft_ultimate_div_mod(int *a, int *b);


void ft_ultimate_div_mod(int *a, int *b)
{



 int tmp;
 tmp = *a;
 *a /= *b;
 *b = tmp % *b;
}

int		main(void)
{
	int a;
	int b;


	a = 4;
	b = 2;

	ft_ultimate_div_mod(&a,&b);
	printf("%d %d \n", a, b);
}
