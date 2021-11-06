/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odursun <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:25:42 by odursun           #+#    #+#             */
/*   Updated: 2021/11/02 11:25:49 by odursun          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
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
 

	a = "abcdefghijklmnoprstuvyz";
	b = "abcdefghA";
	c = "";
	printf("%s = %d\n", a, ft_str_is_lowercase(a));
	printf("%s = %d\n", b, ft_str_is_lowercase(b));
	printf("%s = %d\n", c, ft_str_is_lowercase(c));
    return (0);
}*/
