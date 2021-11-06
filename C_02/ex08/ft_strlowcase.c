/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odursun <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:28:25 by odursun           #+#    #+#             */
/*   Updated: 2021/11/03 12:03:20 by odursun          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	a[] = "ABd/()/()&(dfdfdfCDEFGHIJKLMNOPRSTUVWXYZ";
	char *p_a;
	p_a = ft_strlowcase(a);
	printf("değiştirilmiş hali: %s\n", p_a);
	return 0;
}*/
