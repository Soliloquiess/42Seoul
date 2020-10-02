#include <stdbool.h>
#include <stdio.h>
#include <string.h>


unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				src_size;
	unsigned int	dest_size;
	unsigned int	i;

	i = 0;
	src_size = 0;
	dest_size = 0;
	while (src[src_size])
		src_size++;
	if (size == 0)
		return (src_size);
	while (dest[dest_size])
		dest_size++;
	if (size <= dest_size)
		return (size + src_size);
	i = 0;
	while (size && (--size - dest_size) && src[i])
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (src_size + dest_size);
}



unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				main()
{
	char string[] = "Lol le string\0 mange des chips de crevette";
	char string2[] = " est rouge fluo";
	printf("%d\n",ft_strlcat(string, string2, 29));
	printf("%s\n", string);
	char string0[] = "Lol le string\0 mange des chips de crevette";
	printf("%lu\n",strlcat(string0, string2, 29));
	printf("%s\n", string0);
	return (0);
}
