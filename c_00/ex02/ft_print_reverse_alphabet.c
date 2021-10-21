#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(char reverse)
{
	reverse = 'z';
	while (reverse >= 'a' )
	{
		ft_putchar(reverse);
		reverse --;
	}
}
