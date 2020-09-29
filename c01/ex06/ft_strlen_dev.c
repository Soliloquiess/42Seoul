
#include <unistd.h>



int ft_strlen(char *str)
{
    int length;
    length = 0;
    while(*(str++))
    length++;
    return length;
}

int		main(void)
{
	char	str[15];
	char	*ftr;
	int		length;

	str[0] = 'H';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';
	str[5] = ' ';
	str[6] = 'W';
	str[7] = 'o';
	str[8] = 'r';
	str[9] = 'l';
	str[10] = 'd';
	str[11] = ' ';
	str[12] = '4';
	str[13] = '2';
	str[14] = '\0';
	ftr = &str[0];
	length = ft_strlen(ftr);
	printf("length %d\n", length);
}

