
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putchar(char c);
void ft_print_combn(int n)
{
 int col[9];                   //10자 미만
 int i;
i = -1;
 while (++i < 9)
  col[i] = (i < n) ? i : -1;   //첫 번째 항목
 if (n == 1)
  col[0] = 1;                  //n = 1
 while (1)
 {
  i = -1;
  while (++i < 9 && col[i] >= 0)  //배열 복사
   ft_putchar(col[i] + '0');
  if (col[0] < 10 - n)            //마지막 번호의 첫 코드는 종료 조건
  {
   ft_putchar(',');
   ft_putchar(' ');
  }
  if (col[0] ==  10 - n)          //마지막 번호에 도달
   return;
  col[n - 1]++;                   //숫자 증가
  i = n - 1;
  if (col[n - 1] == 10)           //마지막 숫자가 10일떄
   while (--i > -1)               //뒤에서 배열 탐색
   {
    if (col [i] < 10 - n + i)     //경계에 도달하지 않을 경우 배열의 재 배열을 수행
    {
     col[i]++;
     while (i < n - 1)            //이 루프를 단순화하고 싶지만 경계 조건을 건드릴 수 없습니다.
     {
      col[i + 1] = col[i] + 1;
      i++;
     }
     break;                       //배열 재 배열을 중단하고 다음 인쇄를 실행합니다.

    }
   }
 }
}

int main()
{
	int n = 4;
	ft_print_combn(n);

	return 0;
}
