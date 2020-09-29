
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(void)
{
	char str[15];
	char *ptr;

	str[0] = 'H';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';
	str[5] = ' ';
	str[6] = 'W';
	str[7] = 'o';
	str[8] = 'r';
	str[9] = 'l';
	str[10] = 'd';
	str[11] = ' ';
	str[12] = '4';
	str[13] = '2';
	str[14] = '\0';
	ptr = &str[0];
	printf("%s\n", str);
	ft_putstr(ptr);
}
