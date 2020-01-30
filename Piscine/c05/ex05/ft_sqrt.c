/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbuisser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:30:19 by hbuisser          #+#    #+#             */
/*   Updated: 2019/08/22 21:05:42 by hbuisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int x;
	int y;

	if (nb < 0)
		return (0);
	x = nb;
	y = 1;
	while (x > y)
	{
		x = (x + y) / 2;
		y = nb / x;
	}
	if (x * x == nb)
		return (x);
	return (0);
}