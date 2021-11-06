/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odursun <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:05:48 by odursun           #+#    #+#             */
/*   Updated: 2021/11/06 16:05:49 by odursun          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	s;
	int	c;

	if (argc > 1)
	{
		s = 1;
		while (s < argc)
		{
			c = 0;
			while (argv[s][c])
				ft_putchar(argv[s][c++]);
			ft_putchar('\n');
			s++;
		}
	}
	return (0);
}
