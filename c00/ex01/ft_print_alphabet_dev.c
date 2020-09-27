#include <unistd.h>

void    ft_print_alphabet(void);

void    ft_print_alphabet(void)
{
        char text;

        text = 'a';
        while (text <= 'z')
        {
                write(1,&text,1);
                text++;
        }
}

int     main(void)
{
        ft_print_alphabet();
}

