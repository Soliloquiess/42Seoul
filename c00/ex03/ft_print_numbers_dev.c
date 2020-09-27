#include <unistd.h>

void ft_putchar(char c);
void ft_print_number(void);

void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_print_number(void)
{
    char number = '0';
    while (number <= '9')
    {
        ft_putchar(number);;
        number++;
    }
}

int  main(void)
{
    ft_print_number();
}
                             
======

void ft_putchar(char c);
void ft_print_number(void);

void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_print_number(void)
{
    char number = '0';
    while (number <= '9')
    {
        ft_putchar(number);;
        number++;
    }
}

int  main(void)
{
    ft_print_number();
}
              