#include<ctype.h>

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;
    for(i=0;str[i];i++)
    {
        str[i]=tolower(str[i]);
    }


	return (str);
}

int		main(void)
{
	 char str[]="HELLO World";


	printf("%s\n", str);
	printf("should be upper case: %s\n", ft_strupcase(str));
}


====


char	*ft_strlowcase(char *str)
{
	char *charptr;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr >= 'A' && *charptr <= 'Z')
		{
			*charptr += 32;
		}
		charptr++;
	}
	return (str);
}

=====

