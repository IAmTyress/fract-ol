/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_module.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 16:20:25 by hstark            #+#    #+#             */
/*   Updated: 2020/02/06 11:35:47 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_module(int num)
{
	if (num < 0 && num != -2147483648)
		return (-num);
	return (num);
}