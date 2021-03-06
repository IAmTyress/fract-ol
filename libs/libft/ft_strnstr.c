/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 16:34:52 by hstark            #+#    #+#             */
/*   Updated: 2020/02/06 11:34:57 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n;

	n = -1;
	i = 0;
	if (ft_strlen(s1) == 0)
		return (NULL);
	if (ft_strlen(s2) == 0)
		return ((char *)s1);
	while (s1[i] != '\0' && ++n < len)
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j] != '\0' && n + j < len)
			j++;
		if (s2[j] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
