#include <stdio.h>


int	ft_atoi(char *str)
{
	int		nombre;
	int		signe;
	char	*charptr;

	nombre = 0;
	signe = 1;
	charptr = str;
	while (*charptr == ' ' || (*charptr >= 9 && *charptr <= 13))
		charptr++;
	while (*charptr == '-' || *charptr == '+')
	{
		if (*charptr == '-')
			signe *= -1;
		charptr++;
	}
	while (*charptr >= '0' && *charptr <= '9')
	{
		nombre *= 10;
		nombre += (int)(*charptr - '0');
		charptr++;
	}
	return (nombre * signe);
}


int	ft_atoi(char *str);

int main(void)
{
	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
	return (0);
}
