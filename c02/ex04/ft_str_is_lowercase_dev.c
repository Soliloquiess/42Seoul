
#include <stdio.h>


int		ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] >= 'a' && str[i] <= 'z')
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


int	main(void)
{
	printf("abc, %d\n", ft_str_is_lowercase("abc"));
	printf("ab12, %d\n", ft_str_is_lowercase("ab12"));
	printf("123, %d\n", ft_str_is_lowercase("123"));
	printf("!@#, %d\n", ft_str_is_lowercase("!@#"));
	printf("ABC, %d\n", ft_str_is_lowercase("ABC"));
	printf("Aa, %d\n", ft_str_is_lowercase("Aa"));
	printf(", %d\n", ft_str_is_lowercase(""));
	return (0);
}
