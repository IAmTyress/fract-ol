/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 16:20:58 by hstark            #+#    #+#             */
/*   Updated: 2020/02/06 11:34:57 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memrealloc(void *src, size_t new_size, size_t old_size)
{
	void	*res;

	if (!new_size || !(res = ft_memalloc(new_size)))
		return (NULL);
	if (!src)
		return (ft_memalloc(new_size));
	ft_memmove(res, (const void *)src, old_size);
	free(src);
	return (res);
}
