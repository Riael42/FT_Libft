/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:00:14 by riael             #+#    #+#             */
/*   Updated: 2022/11/29 20:10:02 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	char	*new_ptr;

	if (ptr == (void *)0)
		return (malloc(size));
	if (size == 0)
	{
		free(ptr);
		return ((void *)0);
	}
	new_ptr = (char *)malloc(sizeof(char) * size + 1);
	if (new_ptr == (void *)0)
		return ((void *)0);
	ft_memcpy(new_ptr, ptr, size);
	free(ptr);
	new_ptr[size] = '\0';
	return (new_ptr);
}
