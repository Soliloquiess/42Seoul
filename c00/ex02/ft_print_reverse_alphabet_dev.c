
#include <stdio.h>



void    ft_print_reverse_alphabet(void);


void    ft_print_reverse_alphabet(void)
{
    char text;

    text = 'z';
    while (text >= 'a')
    {
        write(1,&text,1);
        text--;
    }
}

int   main(void)
{
    ft_print_reverse_alphabet();
}
