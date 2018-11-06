/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 17:57:02 by mkopiika          #+#    #+#             */
/*   Updated: 2018/10/24 18:01:26 by mkopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*a;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	a = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		a[i] = min;
		i++;
		min++;
	}
	if (a)
		return (a);
	else
		return (0);
}
