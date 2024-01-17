/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:21:34 by riael             #+#    #+#             */
/*   Updated: 2022/12/24 22:52:44 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	glass;

	glass = nmemb * size;
	if (nmemb != 0 && size != 0)
	{
		if (glass / nmemb != size)
		{
			ft_printf("\n Calloc overflow error \n");
			return ((void *)0);
		}
	}
	ptr = malloc(nmemb * size);
	if (ptr == (void *)0)
		return ((void *)0);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}
