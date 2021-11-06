/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odursun <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:24:52 by odursun           #+#    #+#             */
/*   Updated: 2021/11/02 11:25:09 by odursun          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
		{
			return (0);
		}
	}
	return (1);
}

/*
int	main()
{
	char *a;
	char *b;
	char *c;

	a = "0123456789";
	b = "123456789aa";
	c = "";
	printf("%s = %d\n", a, ft_str_is_numeric(a));
	printf("%s = %d\n", b, ft_str_is_numeric(b));
	printf("%s = %d\n", c, ft_str_is_numeric(c));
	
	return (0);
}*/
