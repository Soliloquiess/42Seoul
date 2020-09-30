
#include <unistd.h>



int	ft_str_is_alpha(char *str)
{
	char *ptr;

	ptr = str;
	while (*ptr != 0)
	{
		if (*ptr < 'A')
		{
			return (0);
		}
		if ((*ptr > 'Z' && *ptr < 'a') || (*ptr > 'z'))
		{
			return (0);
		}
		ptr++;
	}
	return (1);
}

int main(void)
{
	char arr[6] = {'a', 'b', 'c', 'd', '\0', };
	printf("abcd, %d\n", ft_str_is_alpha(arr));
	printf("123a, %d\n", ft_str_is_alpha("123a\0"));
	printf("123, %d\n", ft_str_is_alpha("123\0"));
	printf(", %d\n", ft_str_is_alpha("\0"));
	printf("Aa[, %d\n", ft_str_is_alpha("Aa[\0"));

	char *str_valid;
	char *str_invalid;

	str_valid = "Hello";
	str_invalid = "Hell0";
	printf("should be 1: %d\n", ft_str_is_alpha(str_valid));
	printf("should be 0: %d\n", ft_str_is_alpha(str_invalid));
	return (0);
}
