
#include <stdio.h>
#include <string.h>


int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 != '\0' && (*s1 == *s2) && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

/*

int	ft_strncmp(char *ap_string1, char *ap_string2, unsigned int a_length)

{

    unsigned int i;
	for (i = 0; i < a_length - 1; i++) {
        // 같은 순서에 있는 문자가 서로 다르면 비교를 중단한다.
        if (*ap_string1 != *ap_string2) break;
        // ap_string1을 구성하는 문자가 NULL 문자인 경우에는 반복을 중단한다.
        if (*ap_string1 == 0) break;

        ap_string1++;
        ap_string2++;
    }
    // 두 포인터가 마지막에 비교했던 문자가 동일하다면 두 문자열은 동일하다는 뜻이다.
    // 즉, 반복문이 'if(*ap_string1 == 0) break;'에 의해서 종료되었다는 뜻입니다.
    // 두 문자열이 동일한 경우에는 0을 반환.
    if (*ap_string1 == *ap_string2) return 0;
    else if(*ap_string1 > *ap_string2) return 1; // ap_string1이 큰 경우!
    return -1;
}
*/


int	main(void)
{
	char *str1;
	char *str2;

	str1 = "Helo";
	str2 = "Heq1qqq";
	printf("c  : %d\n", strncmp(str1, str2, 5));
	printf("ft : %d\n", ft_strncmp(str1, str2, 5));
}
