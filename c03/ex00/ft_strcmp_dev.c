
#include <stdio.h>
#include <string.h>

int		ft_strcmp(char* s1, char* s2)
{
	int		i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s2[i] == '\0')
		return (0);
	else
		return (s2[i]);
}



int	main(void)
{
	char* str1;
	char* str2;

	/*
	char str1[] = "Bonjour je suis une baeille";
	char str2[] = "Bonjour je suis une abeille";
	*/
	str1 = "Helloq";
	str2 = "Helloq";
	printf("c  : %d\n", strcmp(str1, str2));
	printf("ft : %d\n", ft_strcmp(str1, str2));
}
