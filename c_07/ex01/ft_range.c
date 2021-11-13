/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odursun <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 12:21:02 by odursun           #+#    #+#             */
/*   Updated: 2021/11/13 12:21:05 by odursun          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (0);
	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
/*
#include <stdio.h>
int    main(void)
{
    int max = 13;
    int min = 7;
    int *array = ft_range(min, max);
    for (int i = 0; i < (max - min); i++)
    {
        printf("%d", array[i]);
    }
}*/
