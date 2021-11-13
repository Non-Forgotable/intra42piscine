/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odursun <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 12:21:21 by odursun           #+#    #+#             */
/*   Updated: 2021/11/13 12:21:35 by odursun          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char	**strs, char	*sep)
{
	char	*arr;
	int		i;
	int		j;
	int		c;
	int		k;

	k = 0;
	i = 0;
	arr = (char *)malloc(sizeof(strs));
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			arr[k] = strs[i][j];
			j++;
			k++;
		}
		c = 0;
		while (sep[c] != '\0' && i < size - 1)
			arr[k++] = sep[c++];
		i++;
	}
	arr[k] = '\0';
	return (arr);
}
/*
#include <stdio.h>
int   main(void)
{
    char *array[] = {"Merhaba" , "kucuk" , "tırtıllar"};
    char sep[] = "&&";
    char *t;
    t = ft_strjoin(6, array, sep);
    printf("%s", t);
}*/
