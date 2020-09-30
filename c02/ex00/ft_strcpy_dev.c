//
#include <unistd.h>



char	*ft_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}


int		main(void)
{
	char *src;
	char dest[12];

	src = "Hello World";
	printf("base   : %s\n", src);
	ft_strcpy(dest, src);
	printf("ft_cpy : %s\n", dest);
}

====

char	*ft_strcpy(char *dest, char *src)
{
	int iterator;

	iterator = 0;
	while (*(src + iterator) != 0)
	{
		*(dest + iterator) = *(src + iterator);
		iterator++;
	}
	*(dest + iterator) = 0;
	return (dest);
}

