/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odursun <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:27:12 by odursun           #+#    #+#             */
/*   Updated: 2021/11/02 11:27:14 by odursun          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	*a;
	char	*b;
	char	*c;

	a = "abcdefghijklmnoprstuvyz+%&/)}~";
	b = "abcdefghÂ";
	c = "";
	printf("%s = %d\n", a, ft_str_is_printable(a));
	printf("%s = %d\n", b, ft_str_is_printable(b));
	printf("%s = %d\n", c, ft_str_is_printable(c));
}*/
