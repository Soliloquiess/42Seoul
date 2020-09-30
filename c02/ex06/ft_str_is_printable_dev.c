
#include <stdbool.h>
#include <stdio.h>


int		ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] >= 32 && str[i] <= 126)
	{
		i++;
	}
	if (str[i] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


int		main(void)
{
	char *str;

	str_valid = "Hell0";;
	printf("should be 1: %d\n", ft_str_is_printable(str_valid));
	printf("should be 0: %d\n", ft_str_is_printable(str_invalid));
}
