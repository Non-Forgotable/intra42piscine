/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odursun <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:24:20 by odursun           #+#    #+#             */
/*   Updated: 2021/11/05 12:24:22 by odursun          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		sayac;
	int		swap;

	sayac = 0;
	while (sayac < size - 1)
	{
		if (tab[sayac] > tab[sayac + 1])
		{
			swap = tab[sayac];
			tab[sayac] = tab[sayac + 1];
			tab[sayac + 1] = swap;
			sayac = 0;
		}
		else
			sayac ++;
	}
}
