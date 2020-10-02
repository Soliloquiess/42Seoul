
#include <stdio.h>
#include <string.h>


char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strcat(char *dest, char *src);
int main()
{
	char string[] = "Lol le string";
	char string2[] = " est rouge";
	printf("%s\n", ft_strcat(string, string2));
	char string0[] = "Lol le string mange des chips de crevette";
	printf("%s\n", strcat(string0, string2));
	return (0);
}
