#include <unistd.h>


void ft_div_mod(int a, int b, int *div, int *mod)
{
*div = a / b;
*mod = a % b;
}

int		main(void)
{
	int a;
	int b;
        int div;
        int mod;

	a = 4;
	b = 2;

	ft_div_mod(a,b,&div,&mod);
	printf("%d %d %d %d\n", a, b,div,mod);
}
