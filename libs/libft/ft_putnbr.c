/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 19:21:57 by hstark            #+#    #+#             */
/*   Updated: 2020/02/06 11:34:57 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int		i;
	int		tmp[10];

	if (n < 0)
		ft_putchar('-');
	if (n == 0)
		ft_putchar('0');
	i = 0;
	while (n != 0)
	{
		tmp[i] = n % 10;
		n /= 10;
		if (tmp[i] < 0)
			tmp[i] *= -1;
		i++;
	}
	while (i-- > 0)
		ft_putchar(tmp[i] + '0');
}
