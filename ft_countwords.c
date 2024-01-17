/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:47:17 by riael             #+#    #+#             */
/*   Updated: 2022/11/30 12:25:16 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_skipstart(const char *str, char c);
static size_t	ft_cutend(const char *str, char c);

int	ft_countwords(const char *str, char c)
{
	size_t	i;
	size_t	l;
	int		wc;

	if (!str || str[0] == '\0')
		return (0);
	i = ft_skipstart(str, c);
	if (str[i] == '\0')
		return (0);
	l = ft_cutend(str, c);
	wc = 1;
	while (i < l)
	{
		while (str[i] != c && i < l)
			i += 1;
		if (str[i] != '\0' && i < l)
			wc += 1;
		while (str[i] == c && i < l)
			i += 1;
	}
	return (wc);
}

static size_t	ft_cutend(const char *str, char c)
{
	size_t	l;

	l = ft_strlen(str);
	l -= 1;
	while (str[l] == c)
		l -= 1;
	return (l);
}

static size_t	ft_skipstart(const char *str, char c)
{
	size_t	i;

	i = 0;
	if (!str || str[0] == '\0')
		return (0);
	while (str[i] != '\0' && str[i] == c)
		i += 1;
	return (i);
}
