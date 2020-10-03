#include <stdbool.h>
#include <stdio.h>
#include <string.h>



void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void ft_putnbr (int nb)
{
long int n;
n = nb;
if (n <0)
{
     ft_putchar ( '-');
  n = -n;
// long int에 가장 큰 음의 정수가 저장되면 절대 값을 사용할 수 있습니다.
}
if (n> 9)
  ft_putnbr (n / 10); //  재귀
ft_putchar ( '0'+ n % 10); // 원래 nb가 123 일 때 n은  1, 12, 123입니다.
}

int		main(void)
{
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(4242);
	ft_putchar('\n');
	ft_putnbr(20000706);
	ft_putchar('\n');
	ft_putnbr(+2147483647);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
}
