/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:34:58 by riael             #+#    #+#             */
/*   Updated: 2022/12/24 23:04:02 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(const char *s, char const *set)
{
	unsigned int	i;
	size_t			size;
	char			*dest;

	i = 0;
	if (s == (void *)0)
	{
		ft_printf("\n strtrim received NULL as s, returning NULL \n");
		return ((void *)0);
	}
	size = ft_strlen(s);
	while (ft_ischars(s[size - 1], set))
	{
		size -= 1;
		if (size == 0)
			return (ft_strdup(""));
	}
	i = 0;
	while (ft_ischars(s[i], set))
		i += 1;
	dest = ft_substr(s, i, size - i);
	return (dest);
}
