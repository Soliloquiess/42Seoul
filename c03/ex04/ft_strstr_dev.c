#include <stdbool.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j])
			{
				j++;
				if (!to_find[j])
					return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}



int main()
{
	char string[48] = "Poulet au curry";
	char string2[] = "o";
	printf("%s\n", ft_strstr(string, string2));
	printf("%s\n", strstr(string, string2));
	return (0);
}
