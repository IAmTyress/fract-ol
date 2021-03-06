/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free2darr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 13:24:52 by hstark            #+#    #+#             */
/*   Updated: 2020/02/06 11:35:47 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_free2darr(char **res)
{
	int		i;

	i = 0;
	while (res[i])
	{
		ft_strdel(&(res[i]));
		i++;
	}
	free(res);
}
