#include<ctype.h>

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;
    for(i=0;str[i];i++)
    {
        str[i]=toupper(str[i]);
    }


	return (str);
}

int		main(void)
{
	 char str[]="Hello World";


	printf("%s\n", str);
	printf("should be upper case: %s\n", ft_strupcase(str));
}


=====

char	*ft_strupcase(char *str)
{
	char *charptr;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr >= 'a' && *charptr <= 'z')
		{
			*charptr -= 32;
		}
		charptr++;
	}
	return (str);
}


================



/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:41:22 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/08 10:52:02 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i]!=0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}



int		main(void)
{
	 char str[]="Hello World";


	printf("%s\n", str);
	printf("should be upper case: %s\n", ft_strupcase(str));
}

