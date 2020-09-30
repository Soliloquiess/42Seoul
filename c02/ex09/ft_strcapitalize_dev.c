#include <stdbool.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;


	// 단어의 첫 문자를 대문자
	for(i=0; str[i]!='\0'; i++)
	{
		// 첫 번째 문자가 소문자 알파벳
		if(i==0)
		{
			if((str[i]>='a' && str[i]<='z'))
				str[i]=str[i]-32; //subtract 32 to make it capital
			continue;
		}
		if(str[i]==' ')// 공백 확인
		{
			// 공백이 발견되면 다음 문자 확인
			++i;
			// 다음 문자가 소문자 알파벳
			if(str[i]>='a' && str[i]<='z')
			{
				str[i]=str[i]-32; // 32를 빼서  대문자로 만듭니다
				continue;
			}
		}
		else
		{
			// 다른 모든 대문자는 소문자 여야 함
			if(str[i]>='A' && str[i]<='Z')
				str[i]=str[i]+32; // 32를 더해 소문자로 만듭니다
		}
	}

	return (str);
}


int main(void)
{
	char str[] = "rekt17+lol mdr mdr 4242l42$";
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
