/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 14:04:41 by mkopiika          #+#    #+#             */
/*   Updated: 2018/10/24 14:13:52 by mkopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int	result;

	result = 1;
	while ((result * result) <= nb)
	{
		if ((result * result) == nb)
			return (result);
		result++;
	}
	return (0);
}
