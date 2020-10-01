#include <unistd.h>
#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (src[i] && i + 1 < size)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = 0;
	while (src[i])
		++i;
	return (i);
}


int main(void)
{
	char dest[15];
	char str[] = "tdfas";
	printf("%u\n", ft_strlcpy(dest, str, 5));
	printf("%s\n", dest);
	printf("%lu\n", ft_strlcpy(dest, str, 5));
	printf("%s\n", dest);
	return (0);
}
