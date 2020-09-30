
#include <unistd.h>



char	*ft_strncpy(char *str2, char *str1, unsigned int n);
char	*ft_strncpy(char *str2, char *str1, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && str1[i])
	{
		str2[i] = str1[i];
		i++;
	}
	while (i < n)
	{
		str2[i] = 0;
		i++;
	}
	return (str2);
}




int		main(void)
{
	char *str1;
	char str2[20];

	str1 = "Hello World";
	printf("base   : %s\n", str1);
	strncpy(str2, str1, 3);
	printf("cpy    : %s\n", str2);
	ft_strncpy(str2, str1, 3);
	printf("ft_cpy : %s\n", str2);
}
